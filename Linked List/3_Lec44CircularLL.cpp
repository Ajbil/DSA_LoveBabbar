#include<iostream>
using namespace std;
                       // after this video there weere many ques solving video from which i solved ques on codestudio directly
class Node{

    public: 
    int data;
    Node* next; 

    // constructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;
        //memory free code below
        if(this -> next != NULL){
            delete next;
            this -> next =NULL;
        }
        cout << "memory is free for the node with value" << value <<endl;
    }
};

//insertion -> here in circular linked list i dont need to make both head and tail pointer as sirf tail ki madad se mai last aur first node dono ko access kar sakta 

//by this function we will check if the elemnt is present in the given linked list and if then we insert the new node after it 
void insertNode(Node* &tail ,int element, int val){
    // now here case 1 when linked list is empty then we just crete a node and it points to itself and case 2 whne linked list has only one node case 3 when we have 3 node and so on 
    
    // empty list
    if(tail == NULL){
        Node* newNode = new Node(val);
         tail = newNode;
         newNode -> next = newNode;
    }
    else{ // when non-empty list and we assume that elelemnt is present 
        Node* curr =tail;
        // now we traverse till we reach node with elemnt
        while(curr -> data != element){
            curr = curr -> next;
        }
        // now our curr points to element waal node
        Node* temp = new Node(val);
        temp -> next = curr -> next;
        curr -> next =temp;

    }
}

void print(Node* &tail){
    Node* temp = tail;

    if(tail == NULL){ // empty list
    cout << "list is empty"<<endl;
    return;
    }

    // now here i  need to use while loop so that if only one node then also prints
    do{
        cout << temp -> data <<" "; 
        temp =temp -> next;
    }
    while(temp != tail);
    cout <<endl;
}

void deleteNode(Node* &tail, int value){
    //enmpty list
    if(tail == NULL){
        cout <<" list is empty , please check again " << endl;
        return;
    }
    else{ // assuming value is present in the list
        /// here i need two pointer curr and prev 
        Node* prev =tail;
        Node* curr =prev -> next;

        while( curr -> data != value){
            prev =curr;
            curr = curr -> next;
        }

        prev -> next = curr -> next;

        // IF ONLY ONE NODE L.L means curr == prev
        if(curr ==prev){
            tail =NULL;
        }
        //  >=2 node ki l.l ke loiye yeah kaam karega 
        else if(tail == curr){
            tail = prev;
        }
        curr -> next =NULL;
        delete curr;
    }

}

int main()
{
    Node* tail =NULL;
    insertNode(tail ,5 ,3); // yeah vo case ha jab hum empty list mai insert kar rahe
    print(tail);

    insertNode(tail, 3, 55);
    print(tail);

    insertNode(tail, 55, 4);
    print(tail);
    
    insertNode(tail, 55, 9);
    print(tail);
    

    // deletion code
    cout << "printing the linked list before applying deleteion code"<<endl;
    print(tail);

    deleteNode(tail ,3); // here when i am delketing forst node then segmentation fault comes as see i did curr -> next =null and then delete curr so if tail curr ko hi point kar raha hota and see then in line 109 i passed command print(tail) that is problem so i need to put a if condition in deleteNode code which handle this case and i make tail poni to prev .THIS SAME PROBLEM I GET WHEN ONLY ONE NODE IN L.L AND I WANT TO DELETE IT SO I HANDLE IT SEPERATELY line 83
    print(tail);
    
    deleteNode(tail, 55);
    print(tail);

    return 0;
}