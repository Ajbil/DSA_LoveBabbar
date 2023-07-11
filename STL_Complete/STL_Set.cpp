// set ke andar saare unique element store hote, agar 5 baar 10 daal diya toh bhi ek hi 10 hoga set mai 
// iki implementtation BST se hoti hai , we can't modify a elemnt ya toh daale ya delete kare can''t change 
// jab elelemnt nikalene chalu kare toh vo sorted order mai aayege 

#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(5);
    s.insert(5); //insert operatiojj ki t.c O(log n) hoti hai as iit is based on BINARY SEARCH TREE
    s.insert(5);
    s.insert(1);
    s.insert(6); //multiple baar ek hi elelemnt daloge toh bhi ek baar hi aaayega
    s.insert(6);
    s.insert(1);
    s.insert(0);
    s.insert(5);
    s.insert(2);
    s.insert(2);

    for( auto i:s){
        cout <<i <<endl;  // we see sorted way mai aayega output
    }cout<<endl;

    s.erase(s.begin()); // begin vala elelemt erase  ho jayega

    for( auto i:s){
        cout <<i <<endl;  // we see sorted way mai aayega output
    }cout <<endl;

    //we can also bring iterator from outside to delete any eleemnt in set 

    set<int> :: iterator it =s.begin();
    it++;
    s.erase(it);
    // so now as 0 is already erased so now then it will be at begin i.e 1 and we did it++ so it came on 2 and 2 will be deleted 

    cout <<"printing after erased function" <<endl;
    for( auto i:s){
        cout <<i <<endl;  // we see sorted way mai aayega output
    }cout <<endl;


    // we see count functio which will chekc if a elelement is present or not 
    cout<<"check if 5 is presnt or not-->" <<s.count(5)<<endl;
    cout<<"check if -5 is presnt or not-->" <<s.count(-5)<<endl;

    // find fun ction it will return the iterator if that elelemnt is present

    set<int>::iterator itr =s.find(5);
    //printing iterator
    cout<<*itr;
    cout <<endl<<endl<<endl;

    // now we print all element after the iterator pos
    for(auto it=itr;it!=s.end(); it++){
        cout <<*it<<" ";
    }cout <<endl;  // it will print 5 and 6 
    return 0;
}

/*REMEEBER INSERT, FIND, ERASE AUR COUNT KI COMPLEXITY O(log n) hai
baki  size begin end empty yeah sari O(1) hai*/