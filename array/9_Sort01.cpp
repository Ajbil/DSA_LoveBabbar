// here it is a sellf made ques by bhaiya 
// here we are given a n array of  0 and 1 and we need to sort that 
// ex if array is  0,1,0,1,1,0,0,1 then outpput should be -->0,0,0,0,1,1,1,1 


#include<iostream>
#include<array>
using namespace std;

void printarr(int a[], int size){
    for(int i=0; i<size; i++){
        cout << a[i] << " ";
    }
}
int main()
{
    
    int arr[8]= {0,1,0,0,1,0,0,1};
    int  n = 8;
    //here we use 2 pointer approach 
    int i =0;
    int j = n-1;

    while(i<j){
        if(arr[i] == 0)
        i++;
        if(arr[j] == 1)
        j--;
        if(arr[i] == 1 && arr[j] == 0){
        swap(arr[i],arr[j]);
        i++;
        j--;
        }

    }
    printarr(arr,8);

    return 0;
}