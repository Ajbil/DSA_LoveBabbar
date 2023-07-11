// here we solve recursion ques based on strings 
//ques 1 -- > given a string in input like "abcde"-> give output its reverse using recusrion

// solution -> we know by loops we did we take two pointer s and e and swap till s<=e
//with recursion we do like 
#include<iostream>
using namespace std;
void ReverseMe(string& input,int start,int end){  // we ssee that here input string ek copy hogi s string ki beacuse we do pass by value . toh jab hum line 24 mai cout kar rahe toh bina reverse hui string s hi rpint ho rahi
//  so wehave two ways either Reverse me function hi reversed string print karde or we pass by refernnce . toh kujhe sirf string input ko string& input likhan hai parameter mai aur code chalega 
    
   // this print statment we add to see whaat appens in every call
    cout<<"call received for " <<input << endl;
    /// base case
    
    if(start>=end){
        return ;
    }
    
    swap(input[start],input[end]);
    ReverseMe(input,start+1,end-1);
}

int main()
{
    string s ="niaj tnahira";
    int size =s.length();
    // now we call our recuisive function
    ReverseMe(s,0,size-1);
    cout << s;
    return 0;
}

// h.w --> can we optimise the above code that we are using 2 pointer can we do it with one pointer -- > hint hai ki end ko bhi start ke term mai  hi likh lo some what like end =s.length()- start+1 or anything else

// ques 2 -- > check palindrome solved on https://www.codingninjas.com/codestudio/problems/check-palindrome_920555?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_13
//ques is Check If Binary Representation of a Number is Palindrome.
//VVIMP THING WRITTEN IN CODE MUST CHECK 

//ques 3 take two input from user a and b and retrun a^b recusivelty
//see 3_1Lec34Powerrecusively.cppp for sol  also see in vdeio how recusion tree is made for understanding recusrion deeply

//now we do sorting algo by recusion
// first we do bubble sort see 3_2LEC34BubbleSort.cpp for code

//--> h.w do insertion sort and selelction sort by recursion 