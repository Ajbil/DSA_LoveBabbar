// non linear data structure hai 
// one node can be linked to multiple node unlike linked list it was linear
// binary tree each node can have <= 2 children
// each node have daat and left and right pointers 

                                                        // creation of binary tree 
                                                        // level order traversal or Breadth first search 


#include<iostream>
#include<queue> // for level order traversasl
using namespace std;

//input data used for testing -> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

class node{

    public:
        int data;
        node*left;
        node* right;

    node(int d){ // constructor
        this -> data= d;
        this -> left =NULL;
        this -> right =NULL;
    }    
};



node* buildTree(node* root){

    cout << "enter the data  " << endl;
    int data;
    cin >> data;
    root = new node(data); // we created a root node and here constructor call occur

    // i will treat -1 as NULL
    if(data == -1){
        return NULL;
    }

    // now we know recursion ek case solve karo baki recursion sambhal rega 
    // i want to insert at the left of current node so
    cout << " enter daat for left side of node"<<endl;
    root -> left = buildTree(root -> left); // recursion sambhla lega 

// see ab pehle left vale node banaega har node ke uske baad right part banega phir vapis us node pe aayege

    cout<<" enter data for inserting in right"<<endl;
    root -> right = buildTree(root -> right);

    return root;

}



// level start from level 0
void levelOrdertraversal( node* root){ // we print nodes at each level by level and till we reach null at last 


/*  THIS CODE WE WROTE FIRSLT AND HERE WE GEET OUTPUT IN A SINGLE LINE SO WE MADE BELOW CODE TO GET OUTPUT IN FORM OF TREE

 // we solve it generally by making queue
     queue<node*> q;
     // sabse pehle root daal doo
     q.push(root);

     //jab tak qqueue empty n ho jaye 
     while(!q.empty()){
        node* temp =q.front(); // temp will tak q ka front
        cout<< temp ->data <<" ";
        q.pop();

        if(temp -> left){ // this means if temp -> left not null hai 
            q.push(temp -> left);
        }

        if(temp -> right){ // this means if temp -> right not null hai 
            q.push(temp -> right);
        }

     }
*/
    
     // to get output in form of tree only we need to put new line after each level and for that i need to use a SEPERATOR here i am using NULL as separator. make on paper to understand 
     queue<node*> q;
     // sabse pehle root daal doo
     q.push(root);
     q.push(NULL); // as level 0 pe sirf root hoga jo hamen daal diya toh as separator push NULL

     //jab tak qqueue empty n ho jaye 
     while(!q.empty()){

        node* temp =q.front(); // temp will tak q ka front
        q.pop();

        if(temp == NULL){ // means we are going to next level so enter a new line
            cout << endl;
            //now if queu is not empty means we have not reacghed last level so for iidentifying the end of next level push NULL 
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{ // means we are in a level oon;y yet 
            cout<<temp -> data<<" ";
           if(temp -> left){ // this means if temp -> left not null hai 
                q.push(temp -> left);
            }

            if(temp -> right){ // this means if temp -> right not null hai 
                q.push(temp -> right);
            } 
        }

     }

}

//Inorder traversal ( LNR traversal)
void inorder(node* root){
    //base case
    if(root == NULL){
        return; // i.e return recursively
    }

    //left ki call jayegi
    inorder(root->left);
    /// node print now
    cout << root->data<<" ";
    //right
    inorder(root->right);
}

//preorder traversal ( nlr traversal)
void preorder(node* root){
    //base case
    if(root == NULL){
        return; // i.e return recursively
    }

    cout << root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

//postorder traversal ( nlr traversal)
void postorder(node* root){
    //base case
    if(root == NULL){
        return; // i.e return recursively
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data<<" ";
    
}

// we learnt how to buikd tree usuing recursion now 
//now we are going to write function whcih will build tree from level order rtaversal input data
void buildFromLevelOrder(node* &root){ // by refernce pass kiya hai isliye return type void kar diya 
    // we will need queue as it is level oorder
    queue<node*> q;
    cout <<" Enter data for the root node "<<endl;
    int data;
    cin>> data;
    root = new node(data);
    q.push(root); //starting mai root push kar diya queue mai 

    while(!q.empty()){
        node* temp =q.front();
        q.pop(); 

        //for left side data
        cout<<"Enter the left node for: "<<temp ->data<<endl;
        int leftData;
        cin>> leftData;

        //now cheeck if it is not -1 i.e null
        if(leftData != -1){
            temp ->left = new node(leftData);
            q.push(temp -> left);
        }

        //for right side data
        cout<<"Enter the right node for: "<<temp ->data<<endl;
        int rightData;
        cin>> rightData;

        //now cheeck if it is not -1 i.e null
        if(rightData != -1){
            temp ->right = new node(rightData);
            q.push(temp -> right);
        }
    }

}

int main()
{
    
    node* root =NULL; // starting mai we make a root node which is null
    
    
    // creting a tree i call fun
    root =buildTree(root);
// now logi in this fun will  be i will make tree using recurion 


    //level ordwr traversal
    cout<<" printing the binary tree by level ordee traversal"<<endl;
    levelOrdertraversal(root);
cout<<endl;
    cout<<" printign the tree by inordeer traversal"<<endl;
    inorder(root);
cout<<endl;
    cout<<" printign the tree by preordeer traversal"<<endl;
    preorder(root);
cout<<endl;
    cout<<" printign the tree by postordeer traversal"<<endl;
    postorder(root);
cout<<endl;


    // buildFromLevelOrder(root);   // uncomment them and comment line 208 to 225 for seeing result of this 
    // levelOrdertraversal(root);

    return 0;
}



//solved one question at last -> Count Leaf Nodes -> link https://www.codingninjas.com/codestudio/problems/count-leaf-nodes_893055?source=youtube&campaign=LoveBabbar_Codestudio&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudio

//home work -> 1)revrse level order traversal in binary tree -> https://www.youtube.com/watch?v=t6IwIr8mPz0&ab_channel=CodeLibrary-byYogesh%26Shailesh


//   2) hwo do iinoder preorder and postordeer traversal without using recursion   -> https://www.enjoyalgorithms.com/blog/iterative-binary-tree-traversals-using-stack