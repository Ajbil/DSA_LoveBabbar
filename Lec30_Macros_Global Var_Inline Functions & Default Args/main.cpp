// we are going to learn a very important concepts like Macros, Global Variables, Inline Functions & Default Args etc.
// some important kkeyword and terms to make our code more optimised and fast
/*
                                             
                                             MACROS  

#include<iostream> we know we use it it iis called a preprocessor directive 

#define we use to define macros 
we create macro named pi whose value is 3.14 like
#define PI 3.14  // no need of semicolon here
--> it work behind the scene as jaha jaha code mai hum PI likheneg toh code compile hone se pehle vaha vaha par 3.14 aa jayegaa
macro koi extra storge nahi leta 

H.W  -->  read article Macros and its types in C/C++ link -->https://www.geeksforgeeks.org/macros-and-its-types-in-c-cpp/


                                            GLOBAL VARIABLE 

if we need to share a varibeel inside more than 1 function without making th copy , we know we didi it by making reference varibale , other method id global variable 
memory block toh ek hi hoga global variable ka but isko alag alag function access kar skate 
we know local var ki lifespan is only within a block of curly brackest 
we make global variable outisde of any function below using namespace std;; line like 
int score =50;

never use global varaible as its a bad practise because it can be changed by any function aur baki functions ke liye bji vo change ho jayega 

                                            INLINE FUNCTIONS

inline functions are used to reduce function call overload
we know jab hum function call karte hai tab stack mai vo uppar aa jata hai aur thoda sa performance issue hota hai
if know if else loop ko hum 1 line mai likh sakte using ternanry operator
ex;-  ans = (a>b) ? a : b;
toh agar function ki andar ki body sirf ek line ki hai toh compiler usko inline bana dega 
hoga abs yahi ki compile hone se pehle jaah pe bhi function call ho raha hoga vaha pe inline function ki body aa jayegi performance thodi enhance ho jati as no function call overhead and no extra memory uses 

                                            DEFAULT ARGUMENTS   

jayada kabhi use nahi aata not iimp but just take a jist

                                            Constant Variables
 

We are now moving on to the constant variables identified by the const keyword in C++.
 As the name suggests, if we declare any keyword as constant, we can’t change its value throughout 
 the program.
Note: The constant variable needs to be assigned during initialization only; 
else, it will store garbage values that can’t be changed further.

Syntax:
const datatype variable_name = value;
Example:
const int a = 5;

//coddestudio link for reference -- >https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118785/offering/1381157




























*/























