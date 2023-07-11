#include<iostream>
using namespace std;


void printarray(int a[],int size){
    for(int i=0;i<size;i++){
        cout<< a[i]<<" ";
    }
    cout<<"\n";
}
void swapalternate(int a[],int size){
    int first =0;
    int second = 1;
    while(first<size && second<size){   /*i can also use logic that i traverse array with i=0 to size -1 and if(i+1<size) then swap i and i+1 elemnt*/
        swap(a[first],a[second]);
        first+=2;
        second+=2;
    }
    
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int arr2[6]={1,2,3,4,5,6};
    /*we need to swap alternate so output will be 2,1,4,3,5  */
    cout<<"printig the original array"<<endl;
    printarray(arr,5);
    swapalternate(arr,5);
    cout<<"printig the output"<<endl;
    printarray(arr,5);

    cout<<"printig the original array"<<endl;
    printarray(arr2,6);
    swapalternate(arr2,6);
    cout<<"printig the output"<<endl;
    printarray(arr2,6);
    return 0;
}