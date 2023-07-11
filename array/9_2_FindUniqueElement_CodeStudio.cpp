/* solved onn codestudio
pasted the function below */

/*given a home work questio of leetoce caaled UNIQUE NUMBER OF OCCURENECE*/
int findUnique(int *arr, int size)
{
    //here we will use XOR property as we know for two same number when we XOR we get 0 and when we xor a number with 0 we get same numebr 
    //so if we xor 4^5^6^5^4 -->0^6^0 --> 6 and i.e only we need 
    
    int ans=0; //initailly i don't know ans so i initialize it with 0and then for loop chalake saare element ko xor kar dunga to get ans
    
    for(int i=0;i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}