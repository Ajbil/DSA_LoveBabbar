#include<iostream>
//include array libraray
#include<array>
using namespace std;

int main()
{
    int normalarray[3] = {1,2,3};
    //stl array
    array<int,4> a ={1,2,3,4}; // int type array name is a and size is 4
    // basically this array is also implemented statically similar to normalarray so we don't see its use much 

    int size = a.size();

    for(int i=0;i<size;i++){
        cout << a[i]<< endl;
    }

    //we can acces eleement alos by using at function
    cout <<"element at index 2 is " << a.at(2)<<endl;
    
    //chekc if array is emepty or not. it will return boolean value  0 or 1 
    cout <<"check if array is empty  " << a.empty() << endl; 

    // we can get first and last eleemnt 

    cout<<"foirst element "<< a.front()<<endl;
    cout<<"last element "<< a.back()<<endl;

    return 0;
}