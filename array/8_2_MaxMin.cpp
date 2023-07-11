#include<iostream>
#include <climits> //to use INT_MIN we need to add this header
using namespace std;


int maxnum(int a[],int n){

    int max = INT_MIN; 

    for(int i=0;i<n;i++){    
        if(a[i] > max){
            max = a[i];
        }
    }
    return max;

}

int minnum(int a[],int n){

    int min = INT_MAX; 

    for(int i=0;i<n;i++){
        if(a[i] < min){
            min = a[i];
        }
    }
    return min;

}


int main()
{   
    cout<<"please enter the size of array"<<endl;
    int size;
    cin >> size;

    int num[100];  // it is bad practise to make array of that much size oonlyy how much element we need to insert so we not made here int num[size] instead always make a fixed size array and if you not use it completely also then np
    cout<<"enter the elements"<<endl;
    for(int i=0;i<size;i++){
        cin >> num[i];
    }

    //calling the functions above and passing array in them to return max and min elemnet

    cout<<"The Maximum element of array is "<< maxnum(num,size)<<endl;
    
    cout<<"The Minimum element of array is "<< minnum(num,size)<<endl;


    return 0;
}