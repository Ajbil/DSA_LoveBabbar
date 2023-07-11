// first elelemt hamesha greatest hoga . jo hum default priority queue banate hai vo
// max heap se relate karta hai . we can also change it to min heap

// YEAH BASICALAY HEAP HAI  

// humne jaise iisme kuch elements daal adiye ab jab hum nikalna shuru karenge tohh agar max heap 
// banaya hoga toh hamesha largest element niklega aur agar min heap banaya hoga toh minimum element niklega

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    // max heap implementation
    priority_queue<int> maxi;

    // min heap implementation
    priority_queue<int,vector<int>, greater<int> > mini;
    //yaha tak humne 2 priority queue bana li hai maxi aur mini , max heap aur min heap implementation se respectively

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);  // kisi bhi order mai push karo but nikalte samye largest hi first niklega
    maxi.push(0);

    cout << "size of maxi is " << maxi.size() << endl;

    int n =maxi.size();
    for(int i=0;i<n;i++){
        cout << maxi.top()<<" "; // read line 24
        maxi.pop(); // largest element print karna ke baad use pop kardo taki next largest print ho agle iteration mai aur is tarah pura max heap print kar deneg
    }cout<<endl;


    mini.push(1);
    mini.push(3);
    mini.push(4);  // kisi bhi order mai push karo but nikalte samye largest hi first niklega
    mini.push(0);
    mini.push(5);

    cout << "size of mini is " << mini.size() << endl;

    int m =mini.size();
    for(int i=0;i<m;i++){
        cout << mini.top()<<" ";
        mini.pop(); 
    }cout<<endl;

    cout<<"check kar khalai hai kya --> " << mini.empty()<<endl;
    return 0;
}


