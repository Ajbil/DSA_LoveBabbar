#include<iostream>
using namespace std;
int power(int n){
    // base case-> we know power of 0 for any num is one so
    if(n==0){
        return 1;
    }

    return 2 * power(n-1);
}
int main()
{
    int n;
    cout << "enter the power you need of 2"<<endl;
    cin>>n;

    int ans =power(n);
    cout << ans;
    return 0;
}