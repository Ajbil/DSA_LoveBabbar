// we saw linear search code in array topic
// T.C is O(logn)
// IT WORKS ONLY ON MONOTONIC FUNCTION i.e sorted array either in increasing order or decresing order

#include <bits/stdc++.h>
using namespace std;


void printarr(int a[], int size){
    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }
}
int binarySearch(int a[], int size, int key){

    int start =0;
    int end = size-1;
    
    int mid = start + (end-start)/2;  // here a important logic we know size of int is 2^31 -1 so now 
    // it is possible that if both start and end index have high value then our mid may go oout of 
    // range of int and then we get error so we replace mid = (start + end)/2 by mid = start + (end-start)/2 

    while(start <= end){

        if(a[mid] == key){;
        return mid;}

        if(key > a[mid]){
            start =mid +1;
        }
        if(key < a[mid]){
            end =mid-1;
        }

        // we need to update mid also 
        mid =  start + (end-start)/2;
    }
    return -1;   //agar key nahi mili

}
int main()
{
    int arr[]= {1,5,6,8,13,5,65,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    //before applying binary search we need to sort array
    sort(arr,arr+8);

    printarr(arr,8);

    int key;
    cout << "enter the element you want to search" <<endl;
    cin>>key;
    cout <<endl;
    // now we return the index of key into answer variable
    int answer = binarySearch(arr, n, key);
    cout <<answer;
    return 0;
}




