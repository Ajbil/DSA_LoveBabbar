//int i =5;
//int *ptr  =&i;
//int **dptr = &ptr   it is our double pointer
/*
we can printt tthe value of variable i by three ways 
cout << i       -> all these give 5
cout << *Ptr    -> all these give 5 
cout << **dptr  -> all these give 5  

read about pass by value and pass by address diffenrec in pointer and functions 


mcq ques  

What will be the output ?
MULTIPLE CHOICE
int a = 10;
int *p = &a;
int **q = &p;
int b = 20;
*q = &b;
(*p)++;
cout << a << " " << b << endl;

ans-- > 10 21  des-->p points to a. q points to p directly and a through p (double pointer). *q — value stored in p is changed to address of b instead of that of a. (*p)++ — value that p points to, which now is of b, is incremented by 1 (b becomes 21). Value of a remains unchanged.



int f(int x, int *py, int **ppz) {
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    return x + y + z;
}
int main() {
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);
    return 0;
}

ans --> 19



#include<iostream>
using namespace std;
int main()
{
  int ***r, **q, *p, i=8;
  p = &i;
  (*p)++;
  q = &p;
  (**q)++;
  r = &q;
  cout<<*p << " " <<**q << " "<<***r;
  return 0;
}

ans-- >10 10 10 


What will be the output ?
void increment(int **p){
  (**p)++;
}

int main(){
 int num = 10;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
}

ans -- >11


*/






