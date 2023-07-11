// first in first out

//saare operation ki compexity isme O(1)hogi
#include<iostream>
#include<queue>
using namespace std;

int main()
{

    queue<string> q;
    q.push("arihant");
    q.push("jain");
    q.push("bilwariya");

    cout <<"top elememnt "<<q.front()<<endl;

    cout<<"size of queue before pop  "<<q.size()<<endl;
    
    q.pop();  // now top elelemt will change

     cout <<"top elememnt after pop "<<q.front()<<endl;

     cout<<"size of queue after pop  "<<q.size()<<endl;

     cout <<"empty or not  " << q.empty()<<endl;
    return 0;
}