/* 
queue is fifo d.s here we have two pointers 1)front this is used to perform the pop operation it basically gives the starting ellemnt of queue 
2) rear is is uded top perform push operation and it gives the ending element of queue
//queeu also have stl and same opertaion like push pop empty etc... 
// impelmemnttation of queue can be ddone using linked list and array both 
link -> https://www.codingninjas.com/codestudio/problems/queue-using-array-or-singly-linked-list_2099908?leftPanelTab=0

// circlular queu -> https://www.codingninjas.com/codestudio/problems/circular-queue_1170058?leftPanelTab=0

//input restricted queue  and output restricted queue 

///doubly ended queeue--> 4 tarike ke operation kar skate isme (push front and pop front and push back and pop back )
isme push front mai hum insert karne ke baad peeche vala index pe jate aur agar front =0 hai  toh insert karne ke baad front ko n-1 pe le jao
push rear mai same ass circluar queue
pop front same as we didi in circular queue
pop front is diffwernrt here -> cyclic nature maintain karne ke liye maan lo rear 0 pe tha fir pop back aaya toh rear ko n-1 pe le jao 



                                doubly ended ques is called deque in STL
*/

//IMPLEMENTATION OF DOUBLY ENEDED QUEU CALLEED DEQUE BY STL
#include<iostream>
#include<queue>
using namespace std;

int main()
{
    deque<int> d;


    d.push_front(12);
    d.push_back(14);

    cout <<d.front()<<endl;
    cout <<d.back()<<endl<<endl;
    
    d.pop_front();
    cout <<d.front()<<endl;
    cout <<d.back()<<endl<<endl;

    d.pop_back();
    if(d.empty()){
        cout << "deequeu is empty"<< endl;
    }

    return 0;
}


// ques implement deque linl ->  https://www.codingninjas.com/codestudio/problems/deque_1170059?leftPanelTab=0