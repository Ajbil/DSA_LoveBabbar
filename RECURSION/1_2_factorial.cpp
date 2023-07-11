#include<iostream>
using namespace std;

int factorial(int n){

    //base case
    if(n==0){
        return 1;
    }

    return n * factorial(n-1);
}
int main(){

    int n;
    cout << "enter the number ";
    cin >> n;

    int ans = factorial(n);
    
    cout << "the factorial of " << n << " is --> "<< ans;
    
}