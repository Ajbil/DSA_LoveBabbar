//we knoe basic question like checking if a  number is  a prime number or not then we knoe its time complexity is O(n);
// ques 1 count primes --> link https://leetcode.com/problems/count-primes/ here we reterrun all primes nuumber less than a given number
//iska brute force approach toh maine lagaya vo answer toh de raha sahi but TLE mar rha kyuki t.c O(n2) hai toh constriants mai dekh 10^6 tak numberr ho sakta toh t.c-->n^2-->10^12 ho gai but 
//most machine  have 10^8 operatin per sec so TLE came i need optimised sol
/*
here comes  concept of               SIEVE OF Eratosthenes

concept is let we need all pprime numbers from 1 to 40 so now forstly write all the numbers from  1 to 40 and cut 1 and 40 as we need prime nu less than 40
then initiially mark all the numbers as prime numbers and then cancel those numbers who comes in table set them non prime and like this we get all prime numbers 
iski TIME COMPELXITY NIKAL SIKH LENA THODA ALAG T.C HAI ISKE --> O(n*log(log n))



                           H.W --> SEGMENTED SIEVE PADHNA AND CODE KARNA     

For a large value of N (>1000000), the simple sieve algorithm throws a memory limit error. To avoid this, we use the segmented sieve algorithm. 
The number of operations performed in simlpeSieve and segmentedSieve is the same. Therefore, time complexity of segmented sieve = time complexity of simpleSieve = O(N * log(logN))
space complexity = Θ(√N). for simple sieve it was  Θ(N).  --> so space copeleixty is optimized 
The idea of the segmented sieve is to divide the range into different segments and compute primes in all segments one by one.

                                          CODE
see basically in simple sieve what we do if we need all primes from 2 to n-1 so what we do id we set initally all as prime and then we 
traverse array from 2 to √N and unke multiple ko non prime set kar deta phir jo bhi bacha it would be our prime 
ab segmented sieve mai mai L se R tak jaunga in each segment ans effectively 2 to √R ke multiple ko non prime set karunga
so basiclly mere aim hai 2 to √R tak mai pehle simple sieve lagake primes nikal lo phir simply ab toh bas jo primes mile unke multiple ko hi non- prime set karna hai L to R mai 

                           for code see segmentedsieve.cpp file 



GCD AND HCF 
-- >here we are going to learn about EUCLID's ALGORITHM
Euclid Algorithm (Efficient Approach)
Euclid Algorithm is used to calculate the GCD of 2 numbers more efficiently. 
According to this algorithm, GCD( A, B) = GCD( B, A%B). We can find GCD through 
this algorithm using recursion until A%B is 0.
but as we not read recursion yet so we are going to solve it iteratively 
formula used will be --> GCD( A, B) = GCD( B, A-B)  we do this until any one term out of b and a-b gets 0 and the remaining pne will be  the ans

vimp read this gfg article to see all four approaches to solve by all 4 ways https://www.geeksforgeeks.org/c-program-find-gcd-hcf-two-numbers/
also see thiis codestudio link https://www.codingninjas.com/codestudio/library/gcd-euclidean-algorithm

see love bhaiya gcd code in gcd.cpp file 
also in that written how lcm and gcd of two number are realted so we can use samae code to find lcm also


NEXT TOPIC -- > MODULAR ARITHMATEIC  LINK to refernec read it  --> https://codeforces.com/blog/entry/72527
we know if we do moulus of a number a with number n then we get result in range of 0 to n-1
we arre going to use modulo property in    FAST EXPONENTIATION PROBLEM or MODULAR EXPONENTIATION 
link -- >https://www.codingninjas.com/codestudio/problems/modular-exponentiation_1082146?utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_7

here we see we early solve a ques to find a to the power of b i.e a^b so we did by taking  
a result =1; and then forlopp(b times ) didi result =result*a;  and here t.c will be O(b)but now 
we do more fast . in fast expo mehtod t.c becomes log(b)
we use conspet that we can represt a^b in two ways 
1.   {a^b/2}^2 when b is even number 
2    {a^b/2}^2 * a  whne b is odd number  

see coding ninja solved ques to see the appraoch code iteratively we did
solved the ques 




homw work -- > study pigeon hole principle
catatlan number
inclusion exclusion principlke 
and find factorial of a big number with modulus 
ex finsd factorial of 212 %m where m = 10^9 +7
see https://www.geeksforgeeks.org/factorial-large-number/
https://stackoverflow.com/questions/29168283/how-do-i-find-factorials-of-large-numbers-modulo-1000000007-in-c



read about        Modulo 10^9+7 (1000000007)
link -- >https://www.geeksforgeeks.org/modulo-1097-1000000007/
*/