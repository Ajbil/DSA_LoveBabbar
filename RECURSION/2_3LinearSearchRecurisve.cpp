// here we do by recursion we apply logic of linear search so same if base case -> if array size 0 and not found return false
//and if array size not zero then we searcg in array we compare first elemnt only  and then next time pass 1 less size and compare 1 st elemnt recursively

#include<iostream>
using namespace std;

bool Isfound(int arr[8], int size,int key){
    // base case
    if(size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    Isfound(arr+1,size-1,key);
}
int main()
{
    int arr[8] ={1,2,3,4,5,6,7,8};  
    int size =8;
    int key =5;
    if(Isfound(arr,size,key)){
        cout << "element is present"<<endl;
    }
    else{cout << "element is not present"<<endl;}
    return 0;
}