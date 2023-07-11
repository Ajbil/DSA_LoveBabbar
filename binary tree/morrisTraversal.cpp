// read first what i wrote at last of FaangQuesBTree.cpp file(line 90) and then come here 

//algo is 
/*
make a curren tvariable of node type 
 set current = root
 now run while loop till(root!= NULL){

    if(left not exiist ){
        then we visit /printt he current node and 
        curerent =current -> right
    }

    else{ // case when left not exiits then 

        we firstly find predecessor of currrent
        pred = findpred(curr); 
        this we find by for one time go left and phir right jate raho jab tab right ka right parrt null na ho ajye 
        //NOW TWO CASES 
        if(pred ka right null hai){
            toh ab yaha hum temporray link abna rahe 
            set pred -> right to pointing the curent node
            and do current =curr-> left
        }
        else{ // pred ka right not null hai
            //yaha hum tmeporary link mita rahe
            sabse pehle pre -? right set to null
            visit /print curent 
            current =current -> right  
        }
    }
 }

*/

//https://www.geeksforgeeks.org/inorder-tree-traversal-without-recursion-and-without-stack/

#include<iostream>
using namespace std;

struct tNode{
    int data;
    struct tNode* left;
    struct tNode* right;
};
//fucntion that construt the node
struct tNode* newtNode(int data){

    struct tNode* node =new tNode;

    node -> data =data;
    node -> left =NULL;
    node ->right =NULL;
}
void MorrisTraversal(struct tNode* root){
    struct  tNode* current, * pred; // pred is here predessor 
    //base acse
    if(root == NULL){
        return ; 
    }
    //set cureeen tnode ar root
    current = root;
    while(current != NULL){
        if(current -> left ==NULL){
            cout<<current -> data << " ";
            current =current -> right;
        }
        else{
            //find the predeccsor 
            pred =current -> left; // only one time we go to left 
            while(pred -> right != NULL && pred -> right != current){
                pred = pred -> right;
            }

            //now if pred -> right is null  make a tmepriatay connection for making cureent as the right child of its inorder predecessor
            if(pred -> right == NULL){
                pred -> right = current;
                current =current -> left;
            }
            else{ // remove the temp connection and print he node
                pred -> right = NULL;
                cout << current -> data <<" ";
                current = current -> right;
            }
        }
    }
    
}
int main()
{
    //construction binary tree
    struct tNode* root =newtNode(1);
    root->left =newtNode(2);
    root->right = newtNode(3);
    root->left->left = newtNode(4);
    root -> left -> right =newtNode(5);

    //call morris trvaesal
    MorrisTraversal(root);

    return 0;
}


//Time Complexity : O(n) If we take a closer look, we can notice that every edge of the tree is traversed at most three times. And in the worst case, 
//the same number of extra edges (as input tree) are created and removed.

//Auxiliary Space: O(1) since using only constant variables