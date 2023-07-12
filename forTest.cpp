//striver sde sheet  -> doing all three traversal using one stack 
//here a particular proces to folow 
// i will be using a pair of stack which will store the {node,num};
//initially store {root,1} into the stack 
//now process is :-
/*
if num ==1 push node in preorder lsit do num++ and if node has left push it in stack
if num ==2 push node in inorder list do num++ and if node has right push it in stack
if num==3 just push it in psotorder list
*/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<stack>
#include<vector>
using namespace std;

struct Node{
    int data;
    struct Node* left, *right;
    
    Node(int data){
        this->data =data;
        left = right =NULL;
    }
};

void allTraversal(Node *root){
    //making the three lsit to stroe the ans 
    vector<int> pre;
    vector<int> in;
    vector<int> post;
    //stack of pair 
    stack<pair<Node*,int>> st;
    //push the root node 
    st.push({root,1});     //ew can call 1 as the status code 
    //now operate of stack 
    while(!st.empty()){
        auto it = st.top();
        st.pop();
        
        //cases 
        if(it.second == 1){
            pre.push_back(it.first->data);
            it.second++;
            
            st.push(it);   //increment karne ke bad vapis push karna mat bhoolna 
            
            if(it.first->left){
                st.push({it.first->left,1});
            }
        }
        
        else if(it.second == 2){
            in.push_back(it.first->data);
            it.second++;
            st.push(it);
            if(it.first->right){
                st.push({it.first->right,1});
            }
        }
        else{
            post.push_back(it.first->data);
            
        }
    }
    
    cout<< " preorder traversal is :";
    for(int i=0;i<pre.size();i++){
        cout<< pre[i] <<" ";
    }
    cout<< "\n";
    
    cout<< " inorder traversal is :";
    for(int i=0;i < in.size();i++){
        cout<< in[i] <<" ";
    }
    cout<< "\n";
    
    
    cout<< " postorder traversal is :";
    for(int i=0;i<post.size();i++){
        cout<< post[i] <<" ";
    }
    cout<< "\n";
}

int main()
{
    //creting the tree
    //creting the root
    struct Node* root = new Node(1);
    root->left =new Node(2);
    root->right  = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right ->left =new Node(6);
    root->right->right= new Node(7);
    
    //funciton call for all three traversal using one stack'
    allTraversal(root);
    
    return 0;
}