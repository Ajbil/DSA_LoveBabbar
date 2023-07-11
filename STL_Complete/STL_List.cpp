 // iski implementtaion doubly linked list se hoti hai usko use karke hi list stl banaya hai
 //isme two pointer hote hai front nad end , isme direct access possible ni hai we need to trave whole list

 #include<iostream>
 #include<list>
 using namespace std;
 
 int main()
 {
     list<int> l;

     list<int> newlist(5,100); // newlist ki size 5 hai aur ikse saare element 100 se initialized hai
    // we can copy one list into another same as we did in case of a vector
    
     cout <<"printing newlist"<<endl;
     for(int i:newlist){
        cout <<i <<" ";
     }cout <<endl;

     l.push_back(1);
     l.push_front(2);

     cout <<"printing list l"<<endl;
     for(int i:l){
        cout <<i <<" ";
     }cout <<endl;

    // we can erase element 
    l.erase(l.begin());
     cout <<"printing list l after erasing begin eleemnt"<<endl;
     for(int i:l){
        cout <<i <<" ";
     }cout <<endl;

    cout <<"size of the list after erase is -> "<<l.size() <<endl;
     return 0;
 }