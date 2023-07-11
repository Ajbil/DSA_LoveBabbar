//here node has data , prev and next pointer
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor
    Node(int d){
        this -> data =d;
        this ->prev = NULL;
        this ->next =NULL;
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
//traversing the linked list
void print(Node* head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data <<" "; 
        temp =temp -> next;
    }
    cout <<endl;
}
// function to find the length of the linked list
int getLength(Node* &head){
    int len =0;
     Node* temp = head;

    while(temp != NULL){
       len++;
       temp =temp -> next;
    }
    return len;
}
void insertAtHead(Node* &head ,Node* &tail, int d){
    if(head == NULL){ // means initally the list is empty
        Node* temp = new Node(d);
        head =temp; // as this is our first node of list
        tail =temp;
    }
    else{
  
    Node* temp = new Node(d); /// sabse ppehle toh constructor ki madad se new node allocate kar do
    temp -> next =head;
    head ->prev =temp;
    head =temp; // don't forget to update head 
          
    }
}
void insertAtTail(Node* &head ,Node* &tail, int d){
    if(tail == NULL){
        Node* temp =new Node(d);
        tail =temp;
        head =temp;
    }
    else{
    Node* temp =new Node(d);
    tail -> next =temp;
    temp -> prev = tail;
    tail = temp; // don't forget to update tail aas now the new node inserted will become tail
    }
    
}
void insertAtPosition(Node* &head,Node* &tail ,int position ,int d){

    if(position ==1 ){
        insertAtHead(head,tail,d);
        return; //if we not use return then problem comes  kyuki hame neecha wale code run ni karna na 
    }
    Node* temp =head;
    int cnt =1;
    while( cnt < position -1){
        temp =temp -> next; 
        cnt++;
    }

    // inserting at the last position
    if(temp -> next == NULL){
        insertAtTail(head,tail,d);
    }

    //this is code for inserting at any middle pos
    Node* nodeToInsert = new Node(d); //yeaha se toh node ban gaya naya

    nodeToInsert -> next = temp ->next;
    temp -> next -> prev =nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev =temp;


}

void deleteNode(int position, Node* &head, Node* &tail){
    
    if(position ==1){
        Node* temp =head;
        temp -> next -> prev =NULL;
        head =temp -> next;
        temp -> next =NULL;
        delete temp;
    }

    else{ 
    Node* current =head;
    Node* prev =NULL;
    int cnt =1;
    while(cnt < position){
       
        prev = current; 
        current =current->next;
        cnt++;
    }

    current -> prev = NULL;
    prev -> next =current -> next;
    current -> next =NULL;
    
    delete current;
    }
}

int main()
{
    //Node* node1 = new Node(10);
    //Node* head = node1;              // see correction part of video as here we see they case when we start from null i.e we don't have this node 1  toh jo insertathead aur insertattail vala function ka code likha hai vaha if else ka use karke is issue ko resolve lkiya . singly linked list vale code mai bhi yeah karnna 
    //Node* tail = node1;

    Node* head =NULL;
    Node* tail =NULL;
    print(head);
    cout <<getLength(head) << endl;
    
    insertAtHead(head,tail, 11);
    cout <<"inserted 11 at head"<<endl;
    insertAtHead(head,tail, 12);
    cout <<"inserted 12 at head"<<endl;
    insertAtHead(head,tail, 13);
    cout <<"inserted 13 at head"<<endl;    
    insertAtHead(head,tail, 14);
    cout <<"inserted 14 at head"<<endl;
    print(head);

    insertAtTail(head,tail,25);
    cout <<"inserted 25 at tail"<<endl;
    print(head);

    insertAtPosition(head ,tail,2 ,1000);
    cout <<"inserted 1000 at loc 2 "<<endl;
    print(head);

    cout << "now we are going to doo deletion " <<endl;
    deleteNode(1,head,tail);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    

    deleteNode(3,head,tail);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    return 0;
}







































