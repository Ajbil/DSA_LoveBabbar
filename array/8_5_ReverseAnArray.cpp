/*basicaaly here 2 cases when no of ellement arr oodd and even . to reveres arrray we need to just 
call swap function for first element and last elemnrt and then doo start++ and end -- and call swap again*/

#include<iostream>
using namespace std;

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<< arr[i]<<" ";
    }
    cout<<"\n";
}

void reverse(int arr[],int size){  
    /*here logic is we need to calll reverse recursively till start <=end conditionn is satisfied 
    so we put it in a while loop  */
    int start = 0;
    int end = size-1;
    while(start<=end){
    swap(arr[start],arr[end]); //inbuilt function of cpp
    start++;
    end--;
    }
   

}
int main()
{
    int num[5]={1,2,3,4,5};
    int num2[6] = {1,2,3,4,5,6};

    cout<<"printing array1 before reverse"<<endl;
    printarray(num,5);
    reverse(num,5);
    cout<<"printing array1 after reverse"<<endl;
    printarray(num,5);


    cout<<"printing array2 before reverse"<<endl;
    printarray(num2,6);
    reverse(num2,6);
    cout<<"printing array2 after reverse"<<endl;
    printarray(num2,6);
    return 0;
}