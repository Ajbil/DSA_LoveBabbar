// recursion means when a function calls itself 
// agar meri kisi badi problem ka solution depened karta hai usi type ki choti problem par toh usko solve karne ke liye we use recursion
// ex is factorial of a number 
//   f(n) =  n * f(n-1)   we stop when we arrive at the base condition
// in recursion we need to write two things 1) a base case where return stat likhna is mandatory and 2) a recursive relation

// see 2_factorial.cpp to see the code to find factorail of number by recursion


//What is the difference between direct and indirect recursion? 
//A function fun is called direct recursive if it calls the same function fun. A function fun is called indirect recursive if it calls another function 
//say fun_new and fun_new calls fun directly or indirectly


// why do we need to put a base case ?
//Such a never-ending recursion causes two problems:

//The obvious problem is that the original call to the function will never end, in principle.
//The more practical problem is that, on every function call, memory is allocated to the function for computation (stack memory allocation). 
//This memory is relinquished to the system when the function returns its results. 
//However, with infinite function recursion, there comes a point where the total stack memory available will run out (a stack overflow) before it is relinquished. 
//It should be noted that this problem can actually also occur if the recursive function computation has a base case to stop the recursion,
// but the recursion is simply too deep, although this can usually be solved by having the system allocated more stack memory, or have the function rewritten to use shallower recursion (or possibly no recursion at all).
// we get segmentation falut if we kep renning the while loop to find factorial -- > Core Dump/Segmentation fault is a specific kind of error caused by accessing memory that “does not belong to you.” 

// recursion tree , tail and head recursion .


//see 3_powerOf2.cpp  file in this folder to find the recusive code for calculating poer of 2 

//see 4_printCounting.cpp for recusive code of printign the counting 

//refer to the documentation and learn more about recursion link -- > https://www.codingninjas.com/codestudio/guided-paths/data-structures-algorithms/content/118522/offering/1380913



/*********************************LEC 32************************************************/

//ques solving session
// 1 -- > fibonacci number link --> https://leetcode.com/problems/fibonacci-number/
//yaha pe wwe see that recrsive relation is ki har term is eqaul to sum of previous two terms so i.e f(n) = f(n-1) + f(n-2); and here abse case is f(0) = 0 and f(1) = 1

// 2 --> Count Ways To Reach The N-th Stairs link --> https://www.codingninjas.com/codestudio/problems/count-ways-to-reach-nth-stairs_798650?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_10
// FAMOUS QUES AND ASKED IN INTERVIEW ALSO 
//also here we see use of modulo operaotr as in ques mentioned thsat Since the number can be huge, so return output modulo 10^9+7.
//// basically yeah code sahi hai but tle maar gay kyuki yeah dp se hoga toh jab hum aage padheneg DP tab saare test case pas ho jayehnge

// 3->say digits --> bhaiya made qques -> ques is given a number 412 in iput give iutput as four one two 
//see file 5_sayDigit.cpp for the coding part



//                                      OVER LEC 31 AND 32  







































