// hwere we know how to get a digit from compete number by using / and % opearotr so we use then and base case is when n umber becomes 0 return 
// and here a nice trick as we are going to store the digit in array so when wwe return arr then output we get in reverse form so we can correct it 
// by calling the recusive function first and then printing the digits by using mapping array of their corresponding english names

#include<iostream>
using namespace std;
void saydigit(int n,string arr[10]){

    if(n ==0){
        return; 
    }

    int temp = n % 10;
    
    n  = n/10;
    saydigit(n,arr);

    cout<<arr[temp-1]<<" ";  // if we write this print statment about the recusive call function then we get in reverse output 
    
}
int main()
{
    int n;
    cout << "enter the number whose digit in english you need" << endl;
    cin >>n;
    // now we need to map the number wiht there names so we make an array
    string arr[10] = {"one","two","three","four","five","six","seven", "eight", "nine" ,"ten"};
    // now we call function and there we write recursive code
    saydigit(n,arr);
    return 0;
}