// here we are going to see solve binary search by using recursion uuding loops we have solved
//  ques1 -- > given an array we need to tell that it is sorted or not using recusion using loops we solved earlier
//  see 2_1IsSorted.cpp file for code and approach

// ques 2 --> given an array we need to find sum using recusion .
//  see file 2_2ArraySumREcusively.cpp for solution

/// linear search we didi but now we do it by using recusion
// see file 2_3LinearSearchRecusion.cpp

//// read about recusion tree method -- >https://www.codingninjas.com/codestudio/library/recursion-tree-method

// MAIN TOPIC OF THIS VIDEO
////////////////////////////  BINARY SERACH USING RECURSION ////////////////////////////

/// we need to implement binarys earch so we need to have a sorted array this is must

// CODE//
// iska base case yeh hoga ki if(s>e) then we return false; -> yeah elekmnt  not found ka base case hai
// ellemnt found ka base case hoga ki mid key ke barabar hai

#include <iostream>
using namespace std;
void print(int arr[], int start,int end){
    for(int i=start;i<=end;i++){
        cout <<arr[i]<< " ";
    }
    cout <<endl;
}
bool BinarySrch(int arr[15], int s, int e, int key)
{
    // base case --> agar s> e hai toh iska matlba nahi hai elemnt
    if (s > e)
    {
        return false;
    }
   
    print(arr,s,e);
    // ek auur base case hai ki ellemnt hai mid pe --> uske loye alwasy claculat mid
    int mid = s + (e - s) / 2;
    if (arr[mid] == key)
    {
        return true;
    }
    else if (arr[mid] > key)
    {
        BinarySrch(arr, s, mid - 1, key);
    }
    else
    {
        BinarySrch(arr, mid + 1, e, key);
    }
}
int main()
{
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int size = 15;
    int key = 15;
    int start = 0;
    int end = size - 1;
    if (BinarySrch(arr, start, end, key))
    {
        cout << "element is present" << endl;
    }
    else
    {
        cout << "element is not present" << endl;
    }
    return 0;
}

// codestudio binary search ques link -- >https://www.codingninjas.com/codestudio/problems/binary-search_972?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_11
// home work ques--> solve recursion question

/**************************************LEC 33 OVER*/////////////////////////////////////////////////
