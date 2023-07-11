//Lecture 74: Heaps in C++ || Heap Sort || Insertion/Deletion in Heap || Priority Queue STL

//heap is  acomplete binary tree wichch comes with the heap order property.
//compelte binary tree have all levels completly filled except possibly the last level and nodes are lean towards the left 

//twoo types of heap-> max heap(child value smaller then parent always ) and min heap(child value always greter then parent node value )

/*    insertion in heap 

-> i am going to implement heap using array so now 
keep th index empty and fill elemnt from index 1 then i see that for any node 
 its left child will be at index =  2 * i;
and its right child will be at index = 2 * i + 1;
and kisi bhi node ka parent i get at index = i / 2;

toh insert karne mai sabse pehle toh use elemnt ko array ke end mai insert kar do 
//ab hame check karna hai vo heap (let take max heap) ki property ke hissab se sahi location pe hai ya nahi toh use sahi loc pe le jao
//check its parent by doing i/2 and for max heap we know parent > child so if not stasfy then swap and od this till condiiton satisfy


*/

#include<iostream>
#include<queue>
using namespace std;

class heap{ //made a heap class intialyh and usme array pada hai aur ek function hai  
    public:
    int arr[100];
    int size =0; 




    void insert(int val){ //hume yeah val ko arr ke end mai daalna hai so sizee++ do fisrtly
        size++;
        int index = size;
        arr[index] = val;
        //ab iske sahi location pe le jana hai 
        while(index > 1){ //because 1 index pe toh pure heap ka pparent hoga 
            //sabse pehle iska parent nikal 
            int parent = index/2;

            if(arr[parent] < arr[index]){ //max heap man ke kiya
                swap(arr[parent],arr[index]);
                //update index
                index = parent;
            }
            else{ //means wwe are reached at correct loc so return 
                return;
            }
        }
    }
// we seee that o(log n) hogi insertion ki time complexity 






    void print (){
        for(int i=1 ;i<=size ;i++){ // i=0 pe kuch ni daal hai humne 
            cout<< arr[i] <<" ";
        }cout<<endl;
    }






    //DELETION -> JAB  bhi deleteion ke baat ho means  delete of root node 
    //yeah yaad rakhna ki abhi hum array ki hellp se implement kar rahe heap ko 
    //zpprach -> sabse pehle raplace root with last elelmnt and then delete last elekmnt and finally root ko ab uski sahi jagah par pahuchado
    void deleteFromHeap(){
        if(size ==0){
            cout<< "nothing to delete from heap" <<endl;
            return;
        }

        arr[1] = arr[size]; // last node/elelmt ko first/root pe daal do 
        size--; //basically taki last ellemnt ko acces nahi kar paye 
        //ab root ko sahi jagah par pahucha i let it as a max heap

        int i=1;
        while( i< size){
            int leftChildIndex = 2 * i;
            int rightChildIndex = 2*i +1;

            if(leftChildIndex < size  && arr[i] < arr[leftChildIndex]){
                swap(arr[i],arr[leftChildIndex]);
                i =leftChildIndex;
            }
            else if(rightChildIndex < size  && arr[i] < arr[rightChildIndex]){
                swap(arr[i],arr[rightChildIndex]);
                i =rightChildIndex;
            }
            else{
                return;
            }
        }
         
    }

};






    //  HEAPIFY ALGORITHM -> LET WE ARE GIVENA A ARRAY AND WE NEED TO MAKKE MAX HEAP FROM IT 
    //so remeber that in case of a COMPLETE BINARY TREE LEAF NODES WILL LIE FROM INDEX (n/2)+1 to nth index of array (remember 0 th index pe kuch ni daal humne )
    //leaf node kyuki single node ha toh i don't need to process them as they will be heap only so i need to process only 1 to n/2 part of array to place elemnet at there correct postion 
    //  EK NODE KO USKI SAHI JAGAH PE LEJANA HI HEAPIFY FUNCTION KA KAAM HAI (heapify fun mai koi index pass kiya toh hepify function us index se leke neeche vala part ko heap mai convert kar dega )

void heapify(int arr[],int n, int i){ //i is index n is size of array
    //max heap consider 
    //then largeet element wil be at index i
    int largest =i;
    int leftChild =2*i; //left child ka index 
    int rightChild =2*i+1;

    if(leftChild <= n && arr[largest] < arr[leftChild]){  // leftChild <= n kara beause 1 based indexing ki hai maine varna  < karat agar 0 absed indexing hoti toh 
        //update largets
        largest =leftChild;
    }
    if(rightChild <= n && arr[largest] < arr[rightChild]){
        //update largets
        largest = rightChild;
    }
    //ab check kar lo largest change hua hai kya ,, agar change hua hoga toh i ke barabar nahi hoga
    if(largest != i){
        //toh largest ellemnt ko sahi jagah par pahucha do aur phir ab nneche vale tree ke liye bhi check kar lo agar aur updateion possible ho toh by recursion
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}






//HEAP SORT NOW WE ARE GOING TO LEARN -> i.e heap bana hua hai we need tro give elemnt in sorted order

//algo -> (remmeber we are impelemeting heap as an array )
//step 1 -> we know root of heap is the largest elmemnt so swap arr[1] and arr[size] so that largest elelmnt go to its right place then 
// do size--  now we have again we need to bring root to its right place so call heapify function and then again swap arr[1]and arr[size] and do size-- 
//repeat above steps till heap size >=1 (i.e only one elemnt left in array)

void heapSort(int arr[],int n){   // TIME COMPLEXITY IS O(n log n)

    int size =n;

    while(size >= 1){
        //stepm 1 swap
        swap(arr[size],arr[1]);
        //step 2
        size--;
        //step 3
        heapify(arr,size,1); //root node ke liye heapify kar diiya 
    }
}





// NOW WE WILL NOT EVERTIME WRRITE SO BIG CODE WE WILL USE STL NOW 
//FOR THAT WE USE PRIOORITY QUEUE NAMED DATA STRUCTURE 

//PRIORITY QUEUE by default makes max heap but we can also make min heap from it 
// import queue header file 





int main()
{
    heap h;
    h.insert(50);
    h.insert(55);  //insertion function 
    h.insert(53);
    h.insert(52);
    h.insert(54);

    h.print();

    h.deleteFromHeap();  //deletion function 

    h.print();


    // for heapify function created this array
    int arr[6] = { -1,54,53,55,52,50};
    int n=5;
    // we need not to worry about leaf node 
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }

    cout<<"printing the arry after heapify function call" <<endl;
    for(int i=1 ;i<=n;i++){
            cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<" for the array ii given as inpuut first i did made the heap from it calling hapify function and then now i am doing heap sort calling heapSort function"<<endl;
    heapSort(arr,n);

    cout<<"printing the array after heapSort function called" <<endl;
    for(int i=1 ;i<=n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    cout<<"using the prioriity queue now "<<endl;
    priority_queue<int> pq; //yeah max heap hoga 
    pq.push(4);
    pq.push(2);
    pq.push(1);
    pq.push(3);

    cout<< "prrinting the top elment of priority queu"<<endl;
    cout<< pq.top()<<endl;
    pq.pop();
    cout<< "prrinting the top elment of priority queu"<<endl;
    cout<< pq.top()<<endl;

    cout<<"size of the priority queue is "<<pq.size();
    ///we can use pq.empty() to check if empty

    cout <<endl<<endl<<endl;
    cout <<endl<<endl<<endl;
    //to make min heap we use the following code 

    priority_queue<int, vector<int> ,greater<int> > minheap;
    minheap.push(4);
    minheap.push(2);
    minheap.push(1);
    minheap.push(3);

    cout<< "prrinting the top elment of priority queu when using it as min heap"<<endl;
    cout<< minheap.top()<<endl;
    minheap.pop();
    cout<< "prrinting the top elment of priority queu"<<endl;
    cout<< minheap.top()<<endl;

    cout<<"size of the priority queue is "<<minheap.size();


    return 0;
}

//  build min heap -> https://www.codingninjas.com/codestudio/problems/build-min-heap_1171167?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=Lovebabbar
// uppar heapify function sse humne max heap banaan sikh liya ab is ques se min heap sikh jayenge 
















