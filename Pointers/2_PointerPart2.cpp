// we are going to learn a very important concept i.e. Pointers in Arrays and Functions.

//jo array ka naam hota hai vahi array ke first ellemt ko access karne ke liye kaam mai le sakte
// and to get address of first ellemt of array we can use &arr[0] or simpley cout <<arr
// if we do *arr then i get value stored at location of index 0 i.e i get first ellemt of array

// let take a array for understiang all concepts
/*
int arr[10] = {2,5,6};

cout << *arr will give output 2
*arr +1 will give 3
*(arr+1) will give 5 -- > yaha pe +1 ka matlab hai adddress of arr mai 4 byte jod ke jo address aa yega uski value print kar do
(*arr) +1 will give 3

FORMULA FOR POINTER

arr[i] = *(arr+i); these both are equivalent 
simliary this is also equla 
i[arr] = *(i+arr) -- > i.e agar i bahar ho aur arr ka naam box mai ho tab bhi koi dikkat nahi 

symbol tables ka content cannot be changes i.e
int arr[10]; 
arr= arr+1 will give error

simialr to inter poinet we can have character pointer also
but there are som ediffernce between them 
cout ki implementtation charater array ke case mai aur integer array ke case mai differnt hai 

                                             CHAR POINTER 
let take a exmaple 
int arr[1,2,3,4,5];
char ch[6] ="abcde";
thne we know if we print arr we get 1
but in case of character pointer its diffenrt 
if we do cout << ch we get abcde i.e whole array is returen not only first charater 


now here we knoe if we do int *ptr =&arr[0]; then cout << ptr it will print the address where arr[0] is stored 
but 
in case of char if we do char * c =&ch[0]; 
then we think it shoul dprint address of 'a' but no it will print the entire ch array i.e abcde
toh yaha basicaaly hota yeah hai ki print hona start hua a se phir b phir c and then d and e uske baad \0 mil gaya toh stop kar diya 

so if we have a single charater then what we get 
like char temp = 'z'; ab yaha pe null char toh hai nahi
char *p =&temp;
so we see cout << p will print z and then any random chharters till it get \0

see 44:00  and 49:00 also video link -- >https://www.youtube.com/watch?v=rlpw7oi-bpE&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=29&ab_channel=CodeHelp-byBabbar 


                                pointer and functions

we can pass pointer also to the function
 see the video last 10 min part 



some ques from coding ninja mcq (note agar koi bhi ques samjh ni aa raha ho toh video dekhna last ke 15 min sab aa jayega ya yeah doc padhna )


Assume address of 0th index of array ‘b’ is 200. What is the output -
char b[] = "xyz";
char *c = &b[0];
cout << c << endl;

ans -- > xyz  , beccause c stores the address of start of array b (and not of it’s values). So the entire array is printed when c is printed.

#include <iostream>
using namespace std;
int main()
{
  char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
  *(arr + i) = '\0';
  cout << arr;
  return 0;
}

ans -- >  ABCDEFGHIJ , beacuse null chacarter will terminate the prinitng 

#include <iostream>
using namespace std;
int main()
{ 
  char *ptr; 
  char Str[] = "abcdefg";
  ptr = Str;
  ptr += 5;
  cout << ptr;
  return 0;
}

ans --> fg


#include <iostream>
using namespace std;
int main ()
{
  int numbers[5];
  int * p;
  p = numbers; 
  *p = 10;
  p = &numbers[2]; 
  *p = 20;
  p--; 
  *p = 30;
  p = numbers + 3;
  *p = 40;
  p = numbers;
  *(p+4) = 50;
  for (int n=0; n<5; n++) {
     cout << numbers[n] << ",";
  }
  return 0;
}


ans -- > 10,30,20,40,50



#include<iostream>
using namespace std;
int main() {
  char st[] = "ABCD";
  for(int i = 0; st[i] != ‘\0’; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  return 0;
}

ans --> A65AAB66BBC67CCD68DD


#include <iostream>
using namespace std;
int main()
{
  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout<<*ptr2<<" ";
  cout<< ptr2 - ptr1;
  return 0;
}

ans - > 90.5 3 


Figure out the correct output of the following code.
void changeSign(int *p){
  *p = (*p)  *  -1;
}

int main(){
  int a = 10;
  changeSign(&a);
  cout << a << endl;
}

ans -- > -10


void fun(int a[]) {
    cout << a[0] << " ";
}

int main() {
    int a[] = {1, 2, 3, 4};
    fun(a + 1);
    cout << a[0];
}

ans--> 2 1


What will be the output ?
void square(int *p){
 int a = 10;
 p = &a;
 *p = (*p) * (*p);
}

int main(){
 int a = 10;
 square(&a);
 cout << a << endl;
}

ans --> 10


#include<iostream>
using namespace std;
void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

int main()
{
   char *x = "geeksquiz";
   char *y = "geeksforgeeks";
   char *t;
   swap(x, y);
   cout<<x << " "<<y;
   t = x;
   x = y;
   y = t; 
   cout<<" "<<x<< " "<<y;
   return 0;
}
Note: On executing this code, a warning will appear: "ISO C++ forbids converting a string constant into 'char*'. " Ignore the warning and then print the expected output.


ans -->  geeksquiz geeksforgeeks geeksforgeeks geeksquiz



#include <iostream>
using namespace std;
void Q(int z)
{
  z += z;
  cout<<z << " ";
}

void P(int *y) 
{
  int x = *y + 2;
  Q(x);
  *y = x - 1; 
  cout<<x << " ";
}

int main()
{
  int x = 5;
  P(&x);
  cout<<x;
  return 0;
}

ans -- >14 7 6











*/















































