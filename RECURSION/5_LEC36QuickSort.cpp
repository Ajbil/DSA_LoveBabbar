//   Quick Sort using Recursion
// Like Merge Sort, QuickSort is a Divide and Conquer algorithm. It picks an element as a pivot and partitions the given array around the picked pivot. There are many different versions of quickSort that pick pivot in different ways.
// yaha hum ek elelmnt ko uski sahin jagah par rakhte hai aur aise ki uske left partition mai usse saare choote elmemnnt hoge aur right partition mai usse saare bade ellemnt honge
// All this should be done in linear time.
// quick sort basicaly 2 step oroces hai 1) pivot ko uski sahi jagah rakhnai.e partition karna (yeah ek case hum solve kar leneg baki recusion sambhaal lega)  ) recusively quicksort apply karna left and riight partiion pe
// partiion function hume pivot ka index return kar dega , fir humm recursive call maar denge 0 se p-1 ki aur p+1 se end ki

// steps we used in quick sort is 1)take a pivot elelmnt and count elelmnt smaller than that the we place the pivot at start+count index and that is its right place
//  now we need to check condition when all ellemnt at left of pivot are sammal and all at right are large so we use two pointer
// place i at index 0 and j at n-1 then check if ellemnt at index i greater than pivot and ellemnt at index j lesss than pivot then swap them and do i++ and j-- and stop when i>j and this is one complete ppass
// after this we get our pivot at its right place and also elkemnt at left are samller than pivot now pass left and right sub parts recursively to algo and finnali i gget sorted array
#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{

    // first steop find pivot
    int pivot = arr[s]; // we choose starting index as pivot
    // ab hum count karenge kitne elemnt pivot se chote hai
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    } // ab hame pivot ka sahin index pata chal gaya sorted array mai

    int pivotIndex = s + count;
    // so now we place pivot at right position by swapping
    swap(arr[pivotIndex], arr[s]);

    // ab hume yeah karna hia ki pivot ki position se left mai saaare elem,nt smaller ho pivot se and right mai bade ho
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++; // as koi dikkat nahi hai i ko aage bada do
        }
//VVIMP YAHA PE EK CASE MAI <= USE KIYA HAI AUR EK MAI > NOTE IT VARNA OUTPUT ALAG AAYEGA KUCH TEST CASE MAI 
        while (arr[j] > pivot)
        {
            j--; // as koi dikkat nahi hai j ko peche bada do
        }

        // agar uppar ke do while loop mai nahi gaya iska matlab wee need to swap so one more time we check looping condiiton and swao
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]); // wap bhi kar diya aur i ++ aur j -- bhi kar diya
        }
    }

    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return; // retrun recursively it means
    }
    // ab hum partiiton karenge and it will retrun an index
    int p = partition(arr, s, e);

    // left part sort karenege
    quickSort(arr, s, p - 1);

    // right part sort karenge
    quickSort(arr, p + 1, e);
}
int main()
{
    int arr[8] = {6, 6, -6, -2, -4, -6, 2, -6};
    int size = 8;
    quickSort(arr, 0, size - 1);

    // printing the sorted array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// h.w must read this article and see question which are answers at last of article regarding mergesort vs quicksoet and etcc..
