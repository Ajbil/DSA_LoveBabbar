/*video 8 link https://www.youtube.com/watch?v=sNrLlmOIn-c&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=10&ab_channel=CodeHelp-byBabbar
Array Introduction */

// date 27 june 2022 (summer break after second year )

/*how to initilaize all elements oof  array to one value?
answer: https://www.techiedelight.com/initialize-elements-array-same-value-c-cpp/ */
/*what happens when we acces index out of bound ? link- https://www.geeksforgeeks.org/accessing-array-bounds-ccpp/ */
#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<< "value at loc 0 is" << " " << arr[3]; // garbage value is printed
    cout<<endl;
    cout<< arr[100]; //accessing index out of bound prints any garbage value

    int arrSize = sizeof(arr)/sizeof(arr[0]); /*isme ek dikkat hai ki jaise if ii declare an array of larger size like int arr1[15] ={2,7}; but i initilize only 2 places then when i use this sizeof function ii get size of arr1 as 15 only but i know i have only used two location only in it */
    cout<<endl<<arrSize;


    return 0;
}
