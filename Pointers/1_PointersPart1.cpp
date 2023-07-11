//lecture 25 herre we got intro to pointerrs concpet in cpp mostlly it was theory 
/*
here firslty bhaiya told about symbol table (its maintained by compiler read about it some )

address of operator -> & (ampersand) is used to get the addres of the varibale 

pointer is  avaribale who stores the address of the variable 
ex:- int *ptr = &i; 

if we just declare the pointerr and not initilize it like above  then it will take address of garbage value never do this 

* --> it is called dereference operator yeah address pe jo value hai vo batata hai 
like we can print the value at addree of p by cout << *p;  -> agar * use nahi kare toh address print hooga 

// caal  by value and caal by reference 

pointer address store karta bhai toh koi sa bhi data type ho address store karne ke liye use 8 byte chhauiye hoga 
so sizeof(ptr) -- > alwyas gives 8 as output

// we read about null pointer 
toh humne dekha ki pointer ko hamaesha initze karna hi hai varna vo garbage value dega 
toh we can do it by 
int *ptr =0;   null pointeer
and then wee want to lpoint it to addreee of i thn do
ptr =&i; 
this will be equivalet to what we di int *ptr = &i;

//copying  a pointer we cann simply do it by    int *q =p;

//pointer arithmetic -->
when we do *t =*t+1 then it means increment the value stored at address of t by 1 
but if we do t=t+1 then if t was a pointer i.t we have declared t as 
int *t =&i;
 then t=t+ means go to the next address loctaion of t 

                                SOME LOGICAL IMP MCQ QESTION 

int *ptr = 0;
int a = 10;
*ptr = a;
cout << *ptr << endl;  -- > here output will come ERROR as segmenetation fault will occur because we are trying to access a null pointer


what will be output 
int a = 7;
int *c = &a;
c = c + 1;
cout  << a << "  " << *c << endl;

 ans -- > 7 Garbage_Value


 Assume the memory address of variable ‘a’ is 400 (and an integer takes 4 bytes), what will be the output -
int a = 7;
int *c = &a;
c = c + 3;
cout<< c << endl;

ans--> 412 as c stores address of a (and points to value of a). address that c stores is incremented by 3. since c is of type int, increment in bytes is 3 integer addresses, that is 3*4 = 12 bytes. therefore 400 + 12 = 412


Assume that address of 0th index of array ‘a’ is : 200. What is the output -
int a[3] = {1, 2, 3};
cout << *(a + 2);

ans -- > 3 

 
*/