/*solved on codestudio*/

#include<iostream>
using namespace std;


int findDuplicate(int arr[], int n) 
{
    // we will use xor operation here concept is we have let say element x appareas twice then array is   1,2,3,4,...x...,n-1,x now we know xor of two same element is zero so now if we xor this above array with number from 1 to n-1 then i see all number will xor out to give 0 and then 0 xor with x will give x 
    int ans =0;
    
    for(int i=0; i<n;i++){
        ans =ans ^arr[i];
        cout << ans <<endl;
    }

    cout <<endl;
    cout <<endl;
    cout <<endl;
    // now xor with number from 1 to n-1
    for(int i=0; i<n;i++){
        ans =ans ^ i;
        cout << ans <<endl;
    }
    
    return ans;
}

int main()
{
    int a[5] = {4,2,1,3,1};
    int answer = findDuplicate(a,5);
    cout << answer;
    return 0;
}