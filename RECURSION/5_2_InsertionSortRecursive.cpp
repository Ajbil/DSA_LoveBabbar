// first see insertion sort iterative and then must see this gfg artocle and video of ggf to completely 
//understand the recusrsive functioning of insertion sorrt
// i wrote on paper how recusricve stack is being built then only i undertsion the proces
#include<iostream>
using namespace std;

void insertionSortRec(int *arr, int size){
    /// now base case of recusrion will be when size =1
    if(size == 1){
       // cout << "we are in base case"<<endl;
        return; // retrun recursively to preious called rec fun
    }
    // now we caal the recursice fun for n-1 size so that finally we left with 1 elllemnt in array and then because 1 elelmnt need not to be sorted so we go in base case and return recursively
    insertionSortRec(arr,size-1);

    //cout <<"callled insertion sort for this size" <<" " <<size <<endl;
//uncomment cout statments to undertand working

    // toh jab sabse pehle iske neecha ka code run hoga vo hoga is rec call ke liye insertionSortRec(arr,1); //i.e jab size =2 hogi
    // toh basically ab hum index 1 aur 0 pe ppade ellemnt kko sort karte is call mai  insertionSortRec(arr,1);
    int last = arr[size-1];
    int i = size-2; // i.e basically last varaible ke just pehle vaal elelmnt 
    while(i>=0 && arr[i] > last) {//matlab sort karna hai 
        arr[i+1] = arr[i];
        i--;
        //cout << "here last is  " <<" " << last <<endl;
        //cout << "here i is  " <<" " << i <<endl;
    }
    arr[i+1] = last;
}
int main()
{
    int arr[] ={12,11,13,5,6};
    int n = sizeof(arr) /sizeof(arr[0]);
    insertionSortRec(arr,n);

    for (int i=0; i < n; i++)
        cout << arr[i] <<" ";
    return 0;
}