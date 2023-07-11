// yahah pe data key value ke form mai store hota hai 
// all keys are unique. ek key ek eleemnt ko hi point kar sakti
// 2 alag keys ek value ko ppoint kar sakti but1 key do alag value ko nahi point kar skati

#include<iostream>
#include<map>
using namespace std;

// ordered map maii bhi set ki tarah inseert find erase ki complexity O(log) hoti
int main()
{
    // let's make map of int and string
    map<int,string> m;  //int key hai aur string value hai

    m[1] = "arihant";
    m[13] = "jain";
    m[14] = "ajbil";  // inseert kisi bhi order mai karo jab bahar nikaloge sorted order hoga
    m[2] = "bilwariya";
    
    // except using line 15 method to insert we can also use inseert function
    m.insert( {5,"nannuSa"});

    cout <<"printing map before erase " <<endl;
    for(auto i:m){
        cout << i.first << "  "<< i.second<<endl; // yaah first se key print hogi aur second se value of key
    }cout <<endl;
    
    cout << "finding elelmnt 13  " << m.count(13)<<endl;
    cout << "finding elelmnt -13  " << m.count(-13)<<endl;

    m.erase(13); //yaha pe key value pass karni hoti

    cout <<"printing map after erase " <<endl;
    for(auto i:m){
        cout << i.first << "  "<< i.second<<endl; // yaah first se key print hogi aur second se value of key
    }cout <<endl<<endl<<endl;

    auto it =m.find(5);  // it will return iterator to 5 and store it in it variable

    for(auto i=it;i!=m.end();i++){
        cout <<(*i).first<<endl;
    }cout <<endl;
    return 0;
}