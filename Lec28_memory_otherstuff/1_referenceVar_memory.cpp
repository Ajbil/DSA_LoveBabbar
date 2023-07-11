// topics covered Reference Variable, Static Memory Allocation, Dynamic Memory Allocation etc.
/*
reference variable means same memeory block but names can be diffeenrt
we can create a ref var like this

int i=5;
int &j = i;
both j and i have value 5  and both have same address 

why do we need reference variables ?
--> we saw if we pass a parameter n to update function from main function then it is pass by value i.e  a copy of that variable is created and when we make the change to that var inside update function then in main function value is not changed, as we make changes to copy og that varibale 
but if we make the  update function paarmeter a reference variable then the chnage will get reflected in main func also becuase new location nahi banti vahi location rehti --> CALLED PASS BY REFERENCE
i.e we write in main
cout << update(n);
 and our update fun is 
 void update(int& n){  // see instaed of int n  we use int& n
    n++;
 }


        RETURN BY REFERENCE 
jaise hum uppar input mai ref var de rah ethe hum output mai bhi ref var type output le sakte 
int& update(int n){
    int a =10;
    int& ans =a;
    return ans;  // yaha ref var typen return ho rsah toh use store karne kke liye function ka retrun type bhi int& rakha line 23 mai

}
but there is problem in it its a bad practise reason see video around 17:00 link -- >https://www.youtube.com/watch?v=MMO2c57XHzM&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=31&ab_channel=CodeHelp-byBabbar


we kow that if we do 
int n
cin >> n; 
int arr[n];   --> then its  abasd practise we should not do this 
beacuse we get to know the size of array at run time and then it will get memory not at comppile time so we make big size array if we don;t have size int arr[100000];

know about stack memory and heap memory  ab tak humne jo bhi kara usme stack memeory alloctae ho rahi thi but if we need variable memory then we need to use hheap and too use heap memory we need to use 'new' keyword
so if we need to make a char with dynamic memory  then write  new char; --- > yaha pe naam nahi de sakte yeah ek char ka block alloctae kar dega aur uska address return kar dega so , i need to use pointer to store this addresss
so we do it like   char* ch=new char;
behind tthe scene--> iisme LHS i.e 8 byte ka ch pointer toh stack mai banega aur RHS 1 byte ka char heap mai banegaa 
so if we need a array in heap then we write int *arr = new int[5]; //yaha totall 8(stack ki memory) + (4*5 heap ki memory)= total 28 byte lega . yaha pe arr pointer ke pass first loc of array ka address hoga 

so we can solve now our above problem line 33 by below code
int n
cin >> n; 
int* arr = new int[n];  // i.e humne ek variable size ka array create kar liya hai 


when we use stack then its called static memory allocation and when we use heap its dynamic memory allo 


                                differemce between static and dynamic memory allocation 

see last 10 min of video https://www.youtube.com/watch?v=MMO2c57XHzM&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=31&ab_channel=CodeHelp-byBabbar
basically static memory allloc mai memory automaticall relese ho jati hai but dynamic mai karna padta hai mmeory release using delete keyword
like for simple int 
int* i =new int;
use delete i;
and for array
int* arr= new int[50];
use delete []arr;

codestudio documentation regarding these concepts https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118785/offering/1381146


void pointer -->A void pointer is a pointer that has no associated data type with it. A void pointer can hold address of any type and can be typecasted to any type
https://www.geeksforgeeks.org/void-pointer-c-cpp/

address typecasting https://stackoverflow.com/questions/2733960/pointer-address-type-casting



                                DYNAMIC MEMORY ALLOCATION of 2D Arrays PART 2 VIDEO

till now we made a 2d array as 
int arr[5][5];  // no pf row and collum batan hoga pehle
now if we are give sizes of row and colum at runtime then we make a 2d arrya by dynamic mmeomory alloc
int m,n;
cin >> m,n;
int arr[m][n];  we know this is not a good practise we not use this method 

we know for 1 d array we did by int *arr =new int [n];
in 2d array if we need to make arr[3][4] i.e aisi 3 1d arrya jisme 4 block ho 
so we know ki dynamic memory all mai arry ko int* ki form mai dekhte hai tooh i need multiple such array for a 2d array so i need multiple int* ka array
soo that ii will store in int** type varibale so 
i.e
int** arr =new int*[n]; i.e abhi ttak isme pointer hi pade hai now i want  haar ppointer ke correspond ek array ho so i appply loop

so if i need to make a 2d array dunamicaly arr[n][n];
then code is 

int n;
cin>>n;
                            visit  link -->https://www.techiedelight.com/dynamic-memory-allocation-in-c-for-2d-3d-array/
int** arr =new int*[n];

for(int i=; i<n;i++){
    arr[i]= new int [n];  // yaha pe mere 2d array crete ho gay 
}
// taking input 
for(int i=0; i<n; i++){
    for(int j=0;j<n;;j++){
        cin >> arr[i][j]; 
    }
}

if we have differnet row and col 
then in line 96 we replce n by row as we know ki int* ke jo array ban rahe vo no of row tak chahiye 
and in line 99 we replce  n by col size 


KEEP IN MIND THAT  HEAP MAI JO MEMEORY ALLOCATE KI HAI USKO KAAM HO JANE KE BAAD RELESE BHI KARN AHOGA 

so we relese memory by below code // agar yeah part ssmajh nahi aaya then see video https://www.youtube.com/watch?v=LlqgWQgm58g&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=32&ab_channel=CodeHelp-byBabbar

for(int i=0;i<row;i++){
    delete [] arr[i];
}
delete []arr;



                                        H.W MAKE A JAGGERED ARRAY DYNAMICALLY 

search for this at google and see the sites -->  jagarred array dynamic memory allocation cppp

for the code see 2_jaggered2dArray.cpp file in same folder 




*/