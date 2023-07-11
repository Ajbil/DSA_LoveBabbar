// algorithm ka use aata hai jab jaise interview ami binary search use aani hai 
// toh uska complete code karne ke bajaye we can use STL and apply binary search

// lets apply binary search on a vector

#include<iostream>
#include<algorithm> // add this library
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1); // we know binary search apply on soretd array sio we insert elelemnt in sorted way
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "applying binary search from begin to end to find elelemt" <<endl;
    cout << binary_search(v.begin(),v.end(),5)<<endl;
    cout << binary_search(v.begin(),v.end(),6)<<endl;

    //upper bound lower bound samjh ni aaya kaise use karte

    int a=3;
    int b=5;
    cout <<"max of a and b we can print by using max function"<<endl;
    cout <<"max is -->" <<max(a,b)<<endl; // simlairy we can print min
    
    // we can swap a and b
    swap(a,b);
    cout <<"value of a after swap   " << a<<endl;

    // we can reverse string 

    string s = "abcd";

    reverse(s.begin(),s.end());
    cout <<"printing string after reverse   " << s <<endl;

    //we can also rotate isme hame 3 parameter dene hote begin ,midle ,end

    rotate(v.begin(),v.begin()+1,v.end()); // yaha pe sirf ek hi elelemnt roatte hoag

    cout <<"printing vector after rotate"<<endl;
    for(int i:v){
        cout <<i<<" ";
    }cout <<endl;


    //we can also apply sort (based on itro sort mixture of three sorting technique)

    sort(v.begin(),v.end()); 

    cout <<"printing vector after sort"<<endl;
    for(int i:v){
        cout <<i<<" ";
    }cout <<endl;
    
    return 0;
}