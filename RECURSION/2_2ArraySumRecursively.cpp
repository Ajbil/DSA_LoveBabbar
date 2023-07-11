// here also same logic we need base case and i.e if array size is zero return 0;
// else we reduce the array size and also increse arr pointer i.e arr+1 pass to the function
//and one more base case if array size is 1 then return that element
#include<iostream>
using namespace std;
int PrintSum(int arr[8],int size){
    // base case
    if(size == 0){return 0;}
    if(size==1)
        return arr[0];
     
    int sum = arr[0] + PrintSum(arr+1,size-1);
    return sum;
}
int main()
{
    int arr[8] ={1,2,3,4,5,6,7,8};  // sum should come 28 now 
    int size =8;
    
    int ans =PrintSum(arr,size);
    cout << ans;
    return 0;
}