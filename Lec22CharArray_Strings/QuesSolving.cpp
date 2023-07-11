// here we are going to solve question on chararcteer array and string 
/*- Length of String
- Reverse a String
- Check Palindrome 
- Valid Palindrome 
- Reverse words 
- Maximum occurring character
- Remove all occurrences of substring
- Remove all adjacent duplicates
- String Compression*/
/*
one dimensional char array is --> string
read about themm at gogole  

after taking input for char array compiler automaticalaly puts  /0 at end of array . this /0
is used to identify terminantion of array.
cin  function read spacebar,tab and enter/ newline char as a termination . if we enter arihant jain
by using cin function then whenn we print output we only get arihant 

*/

// we need to find the llemngth of string
#include<iostream>
using namespace std;

int main()
{
    char a[20];
    cout <<"enter the string "<<endl;
    cin >>a;
    cout <<"the length of entered string is"<<endl;

    int i=0;
    int count =0;
    while(a[i] != '\0'){
        count++;
        i++;
    }
    cout << count;
    return 0;
}

//2 code revere the string here same logicc as wee reversed a int array here also we take start and end pointer
// then swap till start<= end and do start++ and end--;

//solved a question of reverse string on leetcode https://leetcode.com/problems/reverse-string/

// a important concepot of string link--> https://stackoverflow.com/questions/40716515/do-stdstrings-end-in-0-when-initialized-with-a-string-literal
// read about string and its in built fucntion like str.length(), compare etcc 

//3 check palidrome --> https://www.codingninjas.com/codestudio/problems/check-if-the-string-is-a-palindrome_1062633?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_5
/*
if we have a uppercase letter and we want to convert it to lower case then we can do it by 
ch - 'A' + 'a'; --> ch-A will give differnece of that uppercase letter from A the we add that differnce to a to get lowercsase of that letter
similarly if we need to convert to lowercase letterr that we do
ch - 'a' +'A'; 
and if we are given a interger in form of a acharater and we ned to convert it to int then we do as
like let ch ='1'; and we need int 1 then
ch - '0'; 
*/

// ques 4 valid palidrome link --> https://leetcode.com/problems/valid-palindrome/

// google waht are the key  differences between char array and string 

//  SEE BOTH QUESTION 3 AND 4 ARE SAME LOGIC BUT CODES ARE VERY DIFFENRCT as in 3 we are given char arary but in 4 a string
// basically ques ko dhang se padha kar  ques 3 mai toh special chhar ko ignore karna tha but ques 4 mai remove karke compare karna tha 




// ques 5 hai leetcode premium valo ke liye hi bas 
//ques hai   REVERSE WORDS 55.04 pe video mai . 

//https://cplusplus.com/reference/string/string/  visit link to read about stringgs 

// ques 6 gfg ques Maximum Occuring Character  link -->https://practice.geeksforgeeks.org/problems/maximum-occuring-character-1587115620/1

//ncie ques --> we know cin stops its execution when it get space tab or enter/newline so if we want to store My name is arihnat in a character array then i need to use 
/* cin.getline() command
        some inbuilt function of char array are strlength(),strcmp(),strcpy()
*/

//ques  7 --> Remove all occurrences of substring:  https://bit.ly/3sfP71Q  
// --> vgood herre i learn about new stl funciton of strinh like str.erase() and str.insert() , str.replace() and str.substr();

//next ques  Remove All Occurrences of a Substring --> https://leetcode.com/problems/remove-all-occurrences-of-a-substring/
// isme bhi kuch inbuiltstring class ke function use karne se bbahut jaldi ho gaya but vo func aane chahiye 

// next ques DIFFICULT -- >permutation in string -->https://leetcode.com/problems/permutation-in-string/
//A Permutation of a string is another string that contains same characters, only the order of characters can be different. For example, “abcd” and “dabc” are Permutation of each other.
//s ee this gfg ques it is simiar to this leetcode ques but implememnnttaion differs   https://www.geeksforgeeks.org/check-if-two-strings-are-permutation-of-each-other/#:~:text=A%20Permutation%20of%20a%20string,are%20Permutation%20of%20each%20other.

// vimp ques string compression -- > v.good ques link https://leetcode.com/problems/string-compression/

// vgood ques permutation in string --> window approach --> https://leetcode.com/problems/permutation-in-string/
//// SLIDING WINDOW APPPROACH 

// another skidding window appraoch se solve kara ques loink -->https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/
//// yeah pura code maine khud likha hai without any help from love bahuya bas ek test case pass nahi ho raha tha toh discussion tab mai se dekhke ek mistake thi vo sahi kari 


/*********************ALL QUES OF VIDEO SOLVED**********//////////////////////////////