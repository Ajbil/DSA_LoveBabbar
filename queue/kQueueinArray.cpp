/// https://www.geeksforgeeks.org/efficiently-implement-k-queues-single-array/

#include<iostream>
using namespace std;

class KQueue{
    public:
    int n;
    int k;
    int* front;
    int* rear;
    int* arr;
    int* next; // list of next available freespots 
    int freespot;

    public:
    KQueue(int n, int k){ // constructor
        this -> n =n;
        this -> k =k;
        front =new int[k];
        rear = new int[k];
        for(int i = 0; i< k; i++){ // initilize front and rear array
            front[i] = -1;
            rear[i] = -1;
        }

        next =new int[n];
        for(int i=0;i<n;i++){
            next[i] = i+1;
        }
        next[n-1] = -1;

        arr =new int[n];
        freespot =0; 
    }

    void enqueue(int data, int qn){ // i nedd too push daat in queue number qn

        //overflow check
        if(freespot == -1){
            cout << " there is no empty space available "<<endl;
            return;
        }

        //find the index to push where free space available
        int index = freespot;

        // update freespot
        freespot = next[index];

        // now before pushing check wheteher wee are pushing first elment or not of the queue
        if(front[qn-1] == -1){ // we do qn-1 because we use 0 based indexing 
        // means the queue qn iis empty and we are inserting first lelemt 4
            front[qn-1] = index;
        }
        else{ // here is catch see bababr video if not got 
            // means we are inserting >=second elemnt of that queu so we need to link it to the previous memeber of same queu for that we update the next array
            next[rear[qn-1]] = index; // we took rear ass wEE PERFORM insertion at rear 
        }

        //now we need to udpade the next aas now at index loc oof next array we have performed the push so now no free space 
        next[index] = -1;

        // update rear 
        rear[qn-1] = index; // i.e we broing rear on index loc as here we perform insertion

        // fina;ly push the elemnt
        arr[index] = data;

        //remebeer queu mai push rear se karte hai aur pop front se
    }

    int dequeue(int qn){ // qn is queue number from which i want to pop

        // check underflow condition
        if(front[qn-1] == -1){
            cout << " Queue underflow" << endl;
            return -1;
        }

        // find the index to pop we know we do pop at front 
        int index =front[qn-1];

        //front ko aage badha do  ab 
        front[qn-1] = next[index];

        // ab jo free sppace banega jab hum ek elemnt ko pop karenge use bhi frespot coonsider karn ahia toh ab use link karna hoga next array se
        next[index] = freespot;
        freespot = index; //

        return arr[index];  // this is our popped elemnt
    }

};

int main()
{
    KQueue q(10,3);
    q.enqueue(10,1);
    q.enqueue(15,1);
    q.enqueue(20,2);
    q.enqueue(25,1);
    

    cout << q.dequeue(1)<<endl;
    cout << q.dequeue(2)<<endl;
    cout << q.dequeue(1)<<endl;
    cout << q.dequeue(1)<<endl;
    cout << q.dequeue(1)<<endl;
    return 0;
}