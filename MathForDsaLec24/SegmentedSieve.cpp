// mustly first see the basicmath.cpp file for understanding sieve and segmented sieve intro then come here 
// link of yutube cideo -- https://www.youtube.com/watch?v=fByR5N-TseY&ab_channel=CodingNinjas

#include<bits/stdc++.h>
using namespace std;
#define MAX 100001  // root R ki value isse jayada ho nahi sakti so we take it as max
vector<int>* sieve(){
    bool isPrime[MAX] ;// ek array bana liya is prime naam ka max size ka
    for(int i=0; i<MAX; i++){
        isPrime[i] = true; // oehle sab ko prime maan lo
    }
    // noe i make my normal sieve function
    for(int i=2; i*i<MAX;i++){ // 2 se root r tak ke liey 
        if(isPrime[i]){
            for(int j= i*i;j<MAX;j=j+i){
                    isPrime[j] = false;
            }
        }
    }
    vector<int>* primes = new vector<int>();
    primes->push_back(2); // 2 toh pakka prime hai hi toh use primes naam ke vector mai push kar do 
    // ab 3 se leke max tak check karnege aur har odd number ke liye check lkarenge so didi i+=2; 
    for(int i=3; i<MAX;i+=2){
        if(isPrime[i]){
            primes->push_back(i);
        }
    }
    return primes;
} 

void printPrimes(long long l, long long r,vector<int>* & primes ){
    // ab isme segmendted sieve ka logic lagana hai. primes array mai hamara pass sare prime num pade hai. toh ab ek ek prime num uthao primes array mai se aur uske corresponding uske saare multiples k o false set kar do within range LEFT to RIGHT
    // aur simple sieve mai i*i<n  hota tha yaha prime[i]*prime[i]<R tak jana hai
    // we make a bool array isPrime and of size r-l+1 aur abhi ke liye sab ko isprime true kar do
    bool isPrime[r-l+1];
    for(int i=0; i<=r-l;i++){
        isPrime[i] = true;
    }
    for(int i=0; primes->at(i)*(long long)primes->at(i) <= r; i++){ //yeah int*int hai toh ek ko long conveert kar lo taki r se comparison ho paye
        //yaha ek imp logic hai  15:45 in video --> kykui mai l se r mai find karunga toh in case of 2 let if l was 24 then i get it by (24/2)*2 , if l was 25 then i get base value by (25/2)*2 = i.e 24 but as starting point is 25 so i do 24+2 so my base is 26 .
        // basicaaly kisi bhi number se just chota ya uske equal number nikalna jo ki i ka multiple ho  ka tarika ha  (n/i)*i ex (27/4)*4=24
        //so below  i finded base vale by this mehtod
        int currentPrime = primes->at(i);
        long long base = (l/(currentPrime))*(currentPrime);
        if(base<l){ // yeah vo case tha jab l 25 tha aur humne 24+2=26 kara tha 
            base =base + currentPrime;   
        }
        // ab is base se start karn ahai aur right tak jana hai aur currentPrime incemenrt karn ahia , yeah simple sieve jaise hai
        for(long long j = base; j<=r; j+= currentPrime){
            isPrime[j-l]  =false; // j-l index hoga kyuki agar hum 0 se start karte tab tih j-0=j index hi hota but ab hum kisi bhi number l se start kar rah ehai 
        }


        //sab sahi hai bas ek gadbaad ho sakti 
        // jaise l hota 2 aur currentPrime hota 3 toh base =(2/3)*3 =0 aa jata aur phir as 0<2 toh hum karte base = 0 +3=3 toh hum 3 ko fasle kar dete i.e currentPrime ko false kar dete but prime ko toh prime hi rakhan hai na so we write below code to handel it 
        if(base == currentPrime){
            isPrime[base-l] = true; // i.e base ko toh true hi rehne dena hai 
        }
    }
    
    for(int i=0;i<=r-l;i++){ // r-l mere aaray ka size hai
        if(isPrime[i] == true){
            cout << i+l << endl;  // vahi ki agar 0 se sttart hota toh humi+l = i ko hi print kar rahe hota 
        }
    }
}
int main(){
    //pehle sieve se 2 se root R tak primes nikal lo by making a sieve function

    vector<int>* primes = sieve(); //caaleed sieve function taki 2 se root r tak ke saaree primes pehle hi mil jaye and we store it in primes named vectorr
    // now we ask for test cases and run while loop for all trst cases 
    int t;
    cin >> t;
    while(t--){
        long long left,right;
        cin >>left>>right;
        printPrimes(left,right,primes); // is function ko primes vector bhi pass kar rahe hai taki iise pata ho prime num between 2 to root r
    }
    return 0;
}