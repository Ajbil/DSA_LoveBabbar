#include<iostream>
using namespace std;
 // abhi yeah iitertaively kara hai recursive;y aure aacha se ho jayega with use of recursion
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    while(a!=b){  //jab tak dono equal na ho jaye while loop chalket raho
        if(a>b){
            a=a-b;
        }
        else if(a<b){
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a ,b;
    cout << "enter the number a and b" <<endl;
    cin >>a >>b;
    
    int ans= gcd(a,b);

    cout << "the gcd of " << a << " and " <<b <<" is :-  " << ans;

    return 0;
}

/*   vimp --> lcm and gcd of 2 num are related by foemul 
lcm(a,b) * gcd(a,b) = a*b;  --> so we can use gcd code only too find lcm 


*/