// our aim is to print the counting in rverse order like if n =5 then print 5 4 3 2 1 
#include<iostream>
using namespace std;

void counting(int n){
    //base case if n=0 then we don't print anything just return
    if(n==0){
        return ;
    }
    cout << n << " ";
    counting(n-1);
    // now here if we swap line 10 11 then we get countign in ascending order, that is only head and tail recusion 
}
int main()
{
    int n;
    cout << "enter the number from where counting you need"<<endl;
    cin>>n;

    counting(n);
    return 0;
}