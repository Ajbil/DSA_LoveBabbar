// best way to remember shaddi mai rakhi plates 
//last in first out concept

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;

    s.push("arihant");
    s.push("jain");
    s.push("bilwariya");

    cout <<"top elememnt "<<s.top()<<endl;
    s.pop();  // now top elelemt will change

     cout <<"top elememnt after pop "<<s.top()<<endl;

     cout<<"size of stack  "<<s.size()<<endl;

     cout <<"empty or not  " << s.empty()<<endl;
    return 0;
}