//linked list is  a linear data structure made up of nodes
// it is  a dynamic dtata structure i.e we can grow and shrink its size in run time and here insertion and deletion is easy
//linked list has nodes which contain data and poonter to the next node 
#include<iostream>
using namespace std;

class Node { //started coind from here 

    public:
    int data;
    Node* next; // next is pointer of Node type as it will be used to point to a node 

    // constructor 
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }

    //destructor
    ~Node(){ // ~ is called tilda function
        int value = this -> data;
        //memory free code below
        if(this -> next != NULL){ // means vo node kisi memory location ko point kar raha hai
            delete next;
            this -> next =NULL;
        }
        cout << "memory is free for the node with value" << value <<endl;
    }
};

//insertion of new node at head location
void InsertAtHead(Node* &head, int d){//here we are going to insert he node at head so we pass by refernce the head pointer and the data. we paas by referenece as we don;t want a new linked list to crete exisiting mai hi wwe want to insert 
    //jo bhi naya data  aaya for that creete a new node first so we make temp 
    Node* temp = new Node(d);
    temp -> next = head; // nayi node jab bani toh null ko point kar rahi thi usko head ko point karado
    head = temp ; 
}

//insertion of new node at tail location
void InsertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);//jo bhi naya data  aaya for that creete a new node first so we make temp 
    tail -> next =temp; // nayi node jo banai an tail ka next point to that. aur temp ka next toh laready hum null set kar rahe constructor call mai 
    tail = tail-> next; // tail ko bhi update karn ahai na / we can also write here tail = temp;
}

//insertion at the particular position in linked lsi 
void InsertAtPosition(Node* &head,Node* &tail ,int position ,int d){
    // to insert at posiiton n i need to travese till n-1
    Node* temp = head;
    int cnt =1; // 1st node pe toh hum hai hi 
     //here if can't insert at loc 1 directly by calling this function with parameter 1 as we have cnt already 1 so we need to write seperately for 1 
    if(position ==1 ){
        InsertAtHead(head,d);
        return; //if we not use return then problem comes 
    }

    while(cnt < position -1){
        temp = temp ->next;
        cnt++;
    }

    //code for special case when we are inserting 30 at the end we need to update the tail pointer
    if(temp -> next == NULL){//means inserting at last pos
        InsertAtTail(tail,d);
        return; //if we not use return then problem comes 
    }


    // cretaing a node for the data d 
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next =temp->next;
    temp -> next =nodeToInsert;

}

//deletion we can do by pasiing the pos to delete or value too delete
void deleteNode(int position, Node* &head, Node* &tail){
    //midlle aur last ko delete karna tho same code but first ko delete karna is different
    if(position ==1){
        Node* temp =head;
        head =head -> next;
        //memory free kara do  , as memory heap mai allocate hoti toh i need to call destructor 
        temp -> next =NULL;  // 55:00 watch 
        delete temp;
    }

    else{ //for deleting other then pos 1 node we need to have two pointer 
    Node* current =head;
    Node* prev =NULL;
    int cnt =1;
    while(cnt < position){
        //har iteration ke saath current aur prev ko aage badhana hoga 
        prev = current; // 53:00
        current =current->next;
        cnt++;
    }

    prev -> next = current -> next; // by this one line we delete the node at given position
    
    
    current -> next =NULL;   // 55:00 watch 
    delete current; // memory freed
    }
}

//printing / traversing the linked ist
void print(Node* &head){ // we do pass by refernce only so that no issue
    //we make another pointer temp which we increment and traverse all nodes
    Node* temp = head;

    while(temp != NULL ){
        cout << temp -> data << " ";
        temp = temp->next;
    }
    cout <<endl;
}

int main()
{
    Node* node1 = new Node(10);
    //i want when a new node is cretaed then constructur call 
    cout << node1 -> data << endl;
    cout << node1 -> next << endl<<endl<<endl;

    // head pointed to newnode creted
    Node* head = node1;
    Node* tail = node1; //jab ek single node hai toh tail and head points to same node

    print(head);
    InsertAtHead(head,12); // so after this my state will be  head -> 12 -> 10 -> null
    print(head);
    InsertAtHead(head,15);
    print(head);

    cout << "now we see insertion at the tail"<<endl;
    // at this pos lined list is  15 -> 12 -> 10 so now after next line 12 will add at tail
    print(head);
    InsertAtTail(tail,12); 
    print(head);
    InsertAtTail(tail,15);
    print(head);
    cout <<"before using nodetoinsert we have linked list looking like  15 -> 12 -> 10 -> 12 ->15"<<endl;
    cout<<"inserting at a particular location using NodeToInsert functio" <<endl<<endl;
    InsertAtPosition(head ,tail,3,22);
    //InsertAtPosition(head ,1,22); special cases
    InsertAtPosition(head ,tail,7,30); //special case (inserting at the end)
    //37:00 yaha pe we see that insert to ho raha but tail  update nahi ho raha so we need to take care of that also

    print(head); 
    cout <<endl;
    cout << "to verify lets print head and tail data"<<endl;
    cout <<head -> data <<endl;
    cout <<tail -> data <<endl;

    cout << "till now we have seen the insertion methods now we see deletion " <<endl;
    cout <<"before deletion once see our currenlt linked liist looks liks"<<endl;
    print(head);

    deleteNode(1,head,tail);
    cout <<"after deletion" <<endl;
    print(head);
    //deleteNode(6,head);
    //print(head);
    //deleteNode(4,head);
    //print(head);

    return 0;
}