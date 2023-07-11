#include<iostream>
using namespace std;


bool search(int a[],int n, int key){  //yaha 3 parameter pass karne padenge array  uski size aur key jisko search karna hai 
    for(int i=0;i<n;i++){
        if(a[i]== key)
        {
            return 1;
        }
    }

    //agar key hai hi nahi toh for loop will end without returning anything so we retriun 0; at last
    return 0;
}
int main(){

    int arr[10]= {1,5,6,9,-5,-4,35,59,21,25};
    cout<<"enter what to search";
    int key;
    cin>> key;

    bool result = search(arr,10,key);  //make bool type variable and call search function

    if(result){
        cout<<"element is present";
    }
    else{
        cout<<"element is not present";
    }
    return 0;
}