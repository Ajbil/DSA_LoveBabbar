//here see video 14 starting part there explained what's aim to find pivot and how we implemented the codee
/*basically we are given a sorted rotated array i.e like 
suppose we have 1,3,8,10,17 sorted array and now its roatated by three place
we get our rotated sorted array as 8,10,17,1,3 now here we need to find pivot index i.e here in this 
case it's at index 3 .
basically we will break this array into two montonic array which we think of two line 
here line 1 pe 8 ,10,17 lie karega and line 2 pe 1,3 now if arr[mid] >=arr[0] it means we are on line 1
and our pivot can be anywhere further mid so we make here start =mid+1*/

#include<iostream>
using namespace std;

int getpivot(int a[],int size){

    int start =0;
    int end = size-1;
    int mid= start +(end-start)/2;

    while(start <end){

        if(a[mid] >= a[0]){
            start =mid+1;   // means we are on line 1(love bababar video )
        }
        else{
            end =mid;   // means we are on line 2 
        }

        mid= start +(end-start)/2;
    }
    return start;  // we can return end also as both gives same index 
}
int main()
{
    int arr[] ={8,10,17,1,3};
    cout <<"the pivot is at index "<< getpivot(arr,5) <<endl;
    return 0;
}


//next quest is search in a rotated sorted array solved on code studio

// next ques was finding SQUARE ROOT using binary search solved on codestudio this created a lot
// of problem code noot submitted 5 times

