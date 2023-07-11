//video 13

// questions solved on codestudio 
//1. to find the first and last occurenec of a element in sorted array --> its code 
// almost same as binnary search code only we need to do  a minor change 

//WE CAN ALSO USE THIS CODE TO FIND TOTAL NUMBER OF OCCURENEC OF A ELEMNT AS WE GOT INDEX OF first and last occurenec just do last-first+1
// ta code studio we need to submit code using vector
#include<iostream>
using namespace std;

// peak index of a mountain array question solved on leetcode


int firstocc(int a[], int size ,int key){
    int s =0;  //same as binary search code here s stands for start and e for end m for mid
    int e =size -1;

    int m = s + (e-s)/2;
    int ans = -1;  //here we are going to store the index of fisrtoccurenece of key

    while(s<=e){
        if(a[m] == key){  //means we got key but now we need to check if it is present in left part more also because we need forstocc
            ans = m;
            e = m-1; // as we need to check in left part so update end index 
        }
        else if(key > a[m]){
            s = m +1;
        }
        else if(key < a[m]){
            e =m-1;
        }

        // we need to update mid after every iteration of while loop
        m = s+(e-s)/2;
    }
    //after while loop end we get out first occ so return ans index
    return ans;
}

int lastocc(int a[], int size ,int key){
    int s =0;  //same as binary search code here s stands for start and e for end m for mid
    int e =size -1;

    int m = s + (e-s)/2;
    int ans = -1;  

    while(s<=e){
        if(a[m] == key){  
            ans = m;
            s = m+1; //
        }
        else if(key > a[m]){
            s = m +1;
        }
        else if(key < a[m]){
            e =m-1;
        }

        // we need to update mid after every iteration of while loop
        m = s+(e-s)/2;
    }
    //after while loop end we get out first occ so return ans index
    return ans;
}

int main()
{
    int arr[] = {1,2,2,3,5,6,9,9,9,9,10,10,11};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "the first occurenece of element 9 is at index" << firstocc(arr, n ,52)<<endl;
    cout << "the last occurenece of element 9 is at index" << lastocc(arr, n ,52)<<endl;

    return 0;
}