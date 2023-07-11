//vvimp interview mai puch jata hai merge sort aur uska ek varieant ques jo hum is video mai akrnge 
// logic->merge sort mai array ko divide karke soert karte hai jaise binary serach mai kiya the, vahi mid find karna hota
// absed on divide and conquer and its imp;lemented recursively

//now herre we have 2 approaches 1) we divide th array into parts and put them into new array and sort and merge 2) we not use any extra space and play with index to get sorted array
//1) apprach se we do
#include<iostream>
using namespace std;

void merge(int *arr, int s ,int e){

    int mid =s+(e-s)/2;
    //ab mujhe two array crete karne hai 1 ki lentgh mid-s+1 aur 2nd ki len hogi end-mid
    int len1 =mid-s+1;
    int len2 = e-mid;

    int *firstarray =new int[len1];// yaha pe dynamic memeory allocate kari hai toh its is nice practise to delete it so see line 52
    int *secondarray = new int [len2];

    // ab mujhe start se lekar mid vali value ko arry 1 mai copy karna hai, aur simliray mid +1 se end ko array 2mai 
    int mainArrayIndex=s; // yaha mere start store hai
    for(int i=0; i<len1;i++){
        firstarray[i] = arr[mainArrayIndex++];  
    }

    mainArrayIndex=mid+1; // yaha mere second array kastart store hai
    for(int i=0; i<len2;i++){
        secondarray[i] = arr[mainArrayIndex++];
    }

    // ab hame merge two sorted array ka concpet laga ke dono komerge karns ahai -- > yeah code humne pehle bhi kar rakha hai merge 2 sorted array ques ke naam se 
    mainArrayIndex =s;
    int index1 =0; //first subarray ke liye
    int index2 =0; // second ke liye 
    while(index1 < len1 && index2 < len2){
    if(firstarray[index1]  < secondarray[index2]){
        arr[mainArrayIndex++]=firstarray[index1++];
    }
    else{
        arr[mainArrayIndex++]=secondarray[index2++];
    }
}
    // ab maan lo 1st array mai kuch part leh gaya toh usko as it is copy karlo and sam eofr array2 
    while(index1 < len1){
        arr[mainArrayIndex++]=firstarray[index1++];
    }

    while(index2 < len2){
        arr[mainArrayIndex++]=secondarray[index2++];
    }

    delete []firstarray;
    delete []secondarray;
}
void mergeSort(int *arr, int s, int e){
    //base case 
    if(s>=e) {  //yaha base case mai >= aagega
        return ; // it means return recursively
    }
    int mid =s +(e-s)/2;
    // left sub part ke liye recusive call
    mergeSort(arr,s,mid); // is call ke baad 2 , 5 , 1 alag alag ho jayenge
    // right sub part  ke liye recursive call
    mergeSort(arr,mid+1,e); // is call ke  baad  6 , 9 alag alag ho jaynge 
    //now merge them
    merge(arr,s,e);  // ab hamarepass single elemnt ka arrya hai aur ab merge karenege sort karte hua 
    // to understand its functioning see from 10:00 https://www.youtube.com/watch?v=jlHkDBEumP0&ab_channel=Jenny%27slecturesCS%2FITNET%26JRF
}

int main()
{
    int arr[5] = {2,5,1,6,9};
    int size =5;
    mergeSort(arr,0,size-1);

    //printing the sorted array
    for(int i=0; i<size;i++){
        cout << arr[i] << " "; 
    }cout <<endl;

    return 0;
}


// coddstudio ques link -- > https://www.codingninjas.com/codestudio/problems/merge-sort_920442?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_14

// application of merge sort -- > inversion count problem see it --> https://www.geeksforgeeks.org/counting-inversions/
// link where i solve inversion count problem -->https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1
//YEAH PROBLEM PERFECTLY SAMJH NI AI BAHUT KKOSHISH KI SAMJHNE KI BUT PHIR BHI NI AAI TOH CODE COPY KARKE SUBMIT KAR DIYA 


/* -- >1. Space Complexity
Auxiliary Space: O(n)
Sorting In Place: No
Algorithm : Divide and Conquer

2. Time Complexity
Merge Sort is a recursive algorithm and time complexity can be expressed as following recurrence relation.

T(n) = 2T(n/2) + O(n)

The solution of the above recurrence is O(nLogn). The list of size N is divided into a max of Logn parts, and the merging of all sublists into a single list takes O(N) time, the worst-case run time of this algorithm is O(nLogn)

Best Case Time Complexity: O(n*log n)

Worst Case Time Complexity: O(n*log n)

Average Time Complexity: O(n*log n)

The time complexity of MergeSort is O(n*Log n) in all the 3 cases (worst, average and best) as the mergesort always divides the array into two halves and takes linear time to merge two halves.

*/











