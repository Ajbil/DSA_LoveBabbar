int arr[3][3];  // 2d array are equivalent to matrix 
/*
for traversing in a 2 d array we need to have to make two loops 

we see that while passing a  2d array to  a function it is necessary to declare the column size in parameter but not the row size 
  VVIMP.  Why do we need to specify the column size when passing a 2D array as a parameter?
link --> stackoverflow --> https://stackoverflow.com/questions/12813494/why-do-we-need-to-specify-the-column-size-when-passing-a-2d-array-as-a-parameter#:~:text=The%20number%20of%20bytes%20in,work%20for%20arrays%20of%20arrays.
my understanding --> basicaaly se we can get to any position/ index in a 2d array if we resembel it to a 1 d array.
i.e consider a 3* 3 matrix then there we have 9  cells so we can consider this 3*3 2d array as a 1d array of size 9 and then we can map both of them 
we use the formula --> (col*i+j) where col is number of column and i is row index and j is col index .so we can clearly see that we need to know the number of columns and hence it is necesary to declare column size of a 2d array

// we understood finding row wise sum of 2 d array and column wise sum of 2d array 
// and then we need to pruint index which has laergest row sum

// solved this ques self without any help
// ques-- > PRINT 2D VECTOR LIKE A SINE WAVE --> https://www.codingninjas.com/codestudio/problems/print-like-a-wave_893268?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_6&leftPanelTab=1

//IMP   this quess asked in AMAZON multiole times -->Spiral Print -->https://leetcode.com/problems/spiral-matrix/
// its a very good question must remember it 

// H.W -->this is also good ques -- > Rotate a matrix by 90 degree --> link https://leetcode.com/problems/rotate-image/
// isko maine khud paper ke likh ke dekh  toh pata chala ki yeah transpose of matrix ka reverse hai 


// NOW WE WILL LEARN BINARY SEARCH ON 2D ARRAY WE LEARNT FOR 1D ARRAY PREVIOUSLY 
//ques --> search a 2d matrix https://leetcode.com/problems/search-a-2d-matrix/
//we apply binary search on a 2D array in which every row is increasingly sorted from left to right, and the last number in each row is not greater than the first number of the next row.
here we learn a concpet of how to map the mid whuich we find by 1d array formula to 2d array row and column index
so we see that we get the row and column correspondoing index by dividing mid by col size and modulus of mid by col siize respectively 
i.e 
we get each elemnt of 2d array for connparing it with the target of binaty search by
int element = 2darr[mid/col][mid%col];
and mid we alreayd know mid = start + (end-mid)/2
and here TIME COMPLEXITY IS == O(log(m*n)) -- > where m and n are row and column size 


// next level 2 ques of binary search --> https://leetcode.com/problems/search-a-2d-matrix-ii/ 
yaha pe ek trick aur daal di ki ab har elmemt 2d array ka row wiise toh sorted haii hi like above ques but noe each elemnt is sorted col wise also 
tohh ab mai isko ek linear sorted array ki form mai nahi likh paunga
toh yaha pe bahiay ne soch ke approach nikali ke agar mai pehli row ke last elemnt se shuru karu toh shayd kar pau kyuki  
agar mera target pehllii row ke last elment se chota hai tooh uskke column mai tooh vo exist karega nahi so i can do then col--;
aur agar mera target pehli row ke last elemnt se bada hai toh iska matlab vo 1st row mai hoga nahi kyuki jo pehli row ka last element hai vo pehli row ka max hai

hamen dekh ki binary search lagane ka ek hi matlab nahi ki bas mid fiind karo aur lag jao ek aur approahc hai jo hamne 
book alooctaion typpe problem mai dekhi thi ki KYA HUM SEARCH SPACE KO CHOTA KAR SAKTE HAI AGAR HAI TOH TRY BUINARY SEARCH



*/
