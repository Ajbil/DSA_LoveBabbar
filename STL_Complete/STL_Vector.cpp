// vector is a dynamic array(because iski size ko hum kam jayada kar skate hai ) .in this also eleemnt stored continuos memeory loc but here 
// when the size of vector get fulled then it will copy the element into a new vector of double 
// the size of previous vector and dump the old vector 

#include<iostream>
#include<vector>  // add it's libraray
using namespace std;

int main()
{
    
    vector<int> v; // initially iski size,capacity 0 hai
    vector<int> a(5,1); // is case mai vectore ki siize hum decide kar rahe size 5 hai and saari place initialse ho rahi hai 1 se agar kuch nahi likhte toh by default  se initialze hoti hai 


    //size ka amtlab hai kitne element currently hai vectoer mai aur capacity ka matlab hai kitni memeory location isko allot ho rakhi hai 

    //we can chekc capacity by capacity function
    cout<< "the capacity is " <<v.capacity()<<endl; 

    //we can add eleemnt and remove eleement by below func

    v.push_back(1);
    cout<< "the capacity now is " <<v.capacity()<<endl;
    cout<< "the size now is " <<v.size()<<endl;  

    v.push_back(2);
    cout<< "the capacity now is " <<v.capacity()<<endl; 
    cout<< "the size now is " <<v.size()<<endl; 
// we will see that kabhi kisi elelemt ko push karne pe capacoty double ho jayegi and size
// toh jitne element hai utni hi show karega 
    v.push_back(3);
    cout<< "the capacity now is " <<v.capacity()<<endl;
    cout<< "the size now is " <<v.size()<<endl;  

    v.push_back(4);
    cout<< "the capacity now is " <<v.capacity()<<endl; 
    cout<< "the size now is " <<v.size()<<endl; 

    v.push_back(5);
    cout<< "the capacity now is " <<v.capacity()<<endl; 
    cout<< "the size now is " <<v.size()<<endl; 

    cout << "first element  " << v.front()<< endl;
    cout << "last element  " << v.back()<< endl;

    cout <<"element at index 2  "<<v.at(2)<<endl;

    //pop_back function to remove element 

    cout << "array before pop"<<endl;{
        for(int i=0;i<v.size();i++){
                cout << v[i]<<" ";
        }
    }
    //we can also print vector by this code
    /*
    for(int i:v){
        cout <<i <<" ";
    } cout <<endl;
    */
    
    v.pop_back();

    cout << "array after pop"<<endl;{
        for(int i=0;i<v.size();i++){
                cout << v[i]<<" ";
        }
    }

    cout <<endl;

    // clear operation can be used to clear the vector but remeeber clear karne pe size 0 hoga capacity nahi

    cout <<"before clear size and capacity resp are "<< v.size() << "  " << v.capacity()<<endl;
    v.clear();
    cout <<"after clear size and capacity resp are "<< v.size() << "  " << v.capacity()<<endl;    
    


     cout << "printing vector a "<<endl;
        for(int i=0;i<a.size();i++){
                cout << a[i]<<" ";
        }
        cout <<endl;
    

    // if we want to copy vector a into another vectore use below code

    vector<int> lastvector(a);

     cout << "printing lastvector "<<endl;
        for(int i=0;i<lastvector.size();i++){
                cout << lastvector[i]<<" ";
        }
        cout <<endl;



        return 0;
}