//  take two input from user a and b and retrun a^b recusivelty
//yeah ques for loop se humne kar  rakha hai
// aur optimesd way mai bhi kara hai jaha a^b can be reperesnted in two ways 1) when b is even -> a^b/2* a^b/2  2)when b is odd --> a^b/2* a^b/2 *a

// MUST SEE is video m ai iska recusive appraoch dekh kaise kara ghai --> https://www.youtube.com/watch?v=WyY2Af3k1xI&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=37&ab_channel=CodeHelp-byBabbar

int powerRecursively(int a,int b){
    //base case 
    // we knoe if poer of any number 0 then ouptu 1 and if poeer if 1 then output same number
    if( b == 0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    // ab basicaly hamare logic mai hame yeah term, chahiye a^b/2 aur yeah kaam recusion karga 
    int ans =powerRecursively(a,b/2);
    // ab two cases hai when b is evne and when b is odd
    //b is even
    if(b%2 == 0){
        return ans *ans;
    }
    else{
        return a * ans *ans;
    }
}
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin >> a >>b;
    int ans = powerRecursively(a,b);
    cout <<ans<<endl;
    return 0;
}