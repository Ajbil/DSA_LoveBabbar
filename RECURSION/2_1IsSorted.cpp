// appraoch will be we need a base case so that se if our array has only 0 or 1 element then it is already soretd 
//aur recursive appraoch ke liye we seee that agar arr ka pehle elemnt bada hai arr ke 2 nd ellemnt se then return false otherwise now
// i need to chekc for remaing part i.e ignore 1st elment so i call recursively same function ansd pass now arr from next inde by arr+1 and size reduce to 1 by size-1
#include<iostream>
using namespace std;

bool IsSorted(int arr[8], int size){
    // base case for recusion 
    if(size==0 || size ==1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        IsSorted(arr+1,size-1);
    }
}
int main()
{
    int arr[8] ={1,2,3,4,5,50,7,8}; // we know its not sorted now 
    int size =8;

    // we make a boolena function and there inside that we write our recusive code
    if(IsSorted(arr,size)){
        cout <<" the array is sorted "<<endl;
    }
    else{
        cout <<"array sorted nahi hai bahiya ji"<<endl;
    }
    return 0;
}