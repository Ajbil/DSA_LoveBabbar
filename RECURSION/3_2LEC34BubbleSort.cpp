// buuble sort ka case hai in round i we place ith largest elemnt at its place 
// recusively solve karne se pehle ssimple kaise kiya tha yeah code dekh lena 


#include<iostream>
using namespace std;
void BubbleSort(int *arr,int size){
    //base case if siE = or 1 then already sorted
    if(size == 0|| size == 1){
        return;
    }
    // ek case solve kar le matlab 1st largest ellemnt ko apni jagah pahucha de baki recusion mai pass karde
    for(int i=0; i<size-1 ;i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    //recusive statment
    BubbleSort(arr,size-1);  // ek kam size pass akrni hai 
}

//basically recursion ka matlab kya hota hai ek case mai solve lkar lu baki recusion ko pass kar du vo kar lega 
int main()
{
    int arr[5] = {2,5,1,6,9};
    int size =5;
    BubbleSort(arr,size);

    //printing the sorted array
    for(int i=0;i<size;i++){
        cout <<arr[i] << " ";
    }cout <<endl;
    return 0;
}