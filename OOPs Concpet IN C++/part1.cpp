//Lecture 42: OOPs Concepts in C++ 
//link of video--> https://www.youtube.com/watch?v=i_5pvt7ag7E&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=46&ab_channel=CodeHelp-byBabbar

// an object is a n entiity which has 2 thing a properties and a behaviour/function 

// class--> a user defined data type, it is like a template 
//object is a n instance of class

// 12:00 in video --> empty class ke case mai agar hum us class ka objetc  bananye toh usko 1 byte of memory allocate ho jatii hai, us objetc ke identification usko track karne ke liye 

//13:00--> hum ek dusri file mai class banake usko kisis dusri file mai bhi use le sakte 

// we can access the propertirs of class using dot.operator

//access modifiers : public ,private and protected 
// by default acces modifier of a class is private 

//getters and setters --> agar koi bhi data memeber private hai class mai toh hum class mai getter aur setter function banake unhe out of the class access kar skate 

/// see from 27:00 -> h.w ta read about padding and greedy alinment
//https://www.javatpoint.com/structure-padding-in-c#:~:text=Structure%20padding%20is%20a%20concept,create%20a%20user%2Ddefined%20structure.



// must see static and dynamic allocation part of video 

//constructor-> it is ivoked/called whenevr we create a object
//iska koi datatype nahi hota, name of constructor is same as classs name
//default constructor hota hai kar class ka 
//parameterized constructor


//this keyword --> current object ka address this mai store hota hai so its bascially a pointer
//toh agar hume kisi bhi current object ke member kko access karn ahi toh we can use this keyword

//jab bhi agar hum ek bhi constructor bana lete hai toh jo system ne default constructor bana rakhe the vo hat jate hai 


// copy constructor--> ek object ke ssare daat memeber ko dusre object mai copy kar dega
// hum khud ka copy constructor bhi bana sakte  55:00 -> isme pass by reference karna hota hai


//shallow and deep copy concept 
//default copy comnstruct do shallow copy (isme same address pe changes hote hai )
// khud apan jo copy constructor banate vo deep copy karte 

//must see refrence link  https://www.codingninjas.com/codestudio/guided-paths/basics-of-c/content/118817/offering/1382190

 
//copy assignment operator


// destructor -> to deallocate memry we use it , jab object out of scope ho jaye call it to free memory
// jo object hum static allocation se crete karte hai unke liye destructor automatically call hot ahia 
// aur jo object hum dynamically crete karte uske liye we need to manually call the destructor using delete keyword

// h.w --> read about constant keyword and initialisation list 

// static keyword -> static data member ko access karne ke liye kisi object create karne ki need nahi hoti ,kyuki sttaic member object ko belong nahi karta yeah class ko belong karta hai 


//static function ko call karne ke liye we need not to make any object we can call them directly 
// static function can access only static member 
// static function don't have this keyword beacuse this has addree of current object but sttaic function ke liye toh object hi nahi hota 





































