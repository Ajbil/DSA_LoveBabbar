// deque means doublly ended queue here we can perform push and pop operation from both
//side . it is also dynamic.

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    /* cout <<"printing the deque"<<endl;
     for( int i: d){
         cout <<i <<" ";
     }*/
    cout <<endl;

    /* d.pop_front(); //we can also do pop_back()
     cout <<"printing the deque after pop"<<endl;
     for( int i: d){
         cout <<i <<" ";
     }
    */ cout <<endl;

    cout <<"element at index 0 -->"<<d.at(0)<<endl;

    // vahi same froont back aur empty function idaher bhi kaam karte hai

    //here we can erase elelemnt by giving the range we want to erase
    cout <<"size before erase  "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout <<"size after erase  "<<d.size()<<endl;
    return 0;
}