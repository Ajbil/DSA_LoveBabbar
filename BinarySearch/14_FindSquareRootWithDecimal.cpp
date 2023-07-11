// we solved find sqrt(x) ques both onn leetcode and codestudio but there we found oonly the interger
// part by binary search approach now we will find complete square root including the decimal 

// visit the link to learn more about code https://www.geeksforgeeks.org/find-square-root-number-upto-given-precision-using-binary-search/

#include<iostream>
using namespace std;



    int mySqrt(int x) {
        
        int start =0;
        int end = x/2;  // as sqaure root of a number will surely less than half of it 
        long long int ans= 1;
        long long int mid = start +(end-start)/2;  //if we not use llong llong int the we get integer overflow so only i got runtime error on 07/03/2022 10:52
        
        while(start<=end){
            
            if(x==1){
                return 1;
            }
            if(mid*mid == x){
                return mid;
            }
            else if(mid*mid > x){
                end =mid-1;
            }
            else{
                ans = mid;
                start =mid+1;
            }
            mid = start +(end-start)/2;
    }
        return ans;
    }

double finalSqrt(int n, int precision,int integerpart){

    //now we need to implement this function to get final answer 
    // so logic is we take a factor 1 and then we divide it by 10 after every updation so that we get value up to decimal place 

    double factor =1;  //iskko double type banana imp as we are going to do factor/10 at each iteration of precison
    double ans= integerpart; // yaha tak apne pass integer part hai sqrt ka now we are going to update it with adding decimal part in it
    for(int i=0; i<precision;i++){
        factor =factor/10;
        for(double j=ans; j*j<n;j = j+factor){ //loop ke andar loop
                ans =j;
        }
    }
    return ans;
}
int main()
{
    // interger part toh binary search se nikal lenge but to find fractional ppart use brute force and run loop
     int n; 
     cout <<"enter the number whose sqrt is to be found " <<endl;
     cin >>n;
     int precision =3; // i.e we need till 3 decimal sqrt value
     int integerpart = mySqrt(n);
     double answer = finalSqrt(n,precision,integerpart);
     cout << answer;
    return 0;
}