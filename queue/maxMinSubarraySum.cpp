// https://www.geeksforgeeks.org/sum-minimum-maximum-elements-subarrays-size-k/
#include<iostream>
#include<queue>
using namespace std;
// by the optimised approach w  e need to make 2 deque one will store the max elemnt and other min elemnt in the subarray of size k
//this is realted to ques we did First negative integer in every window of size K

int solve(int* arr, int n, int k){

    deque<int> maxi(k); // it will store the index of max  elelmnt in k sized window
    deque<int> mini(k);

    //processing of first k sizedd window 

    for(int i=0 ;i<k;i++){

        while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
            maxi.pop_back();
        }

        while(!mini.empty() && arr[mini.back()]>= arr[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

    }

    int ans=0;

    ans+= arr[maxi.front()] + arr[mini.front()]; // yaha first case ka ans calculate kar liiya maine 

    //remiang windows ko process karlo 
    for(int i=k; i< n; i++){
        
        // removal of index which will not be in window 
        while(!maxi.empty() && i - maxi.front() >= k){
            maxi.pop_front();
        }

        while(!mini.empty() && i - mini.front() >= k){
            mini.pop_front();
        }

        //additin of that iindex which will come in window size

        while(!maxi.empty() && arr[maxi.back()] <= arr[i]){
            maxi.pop_back();
        }

        while(!mini.empty() && arr[mini.back()] >= arr[i]){
            mini.pop_back();
        }

        maxi.push_back(i);
        mini.push_back(i);

        //updating our ans variable for each window
        ans+= arr[maxi.front()] + arr[mini.front()];
    }
    return ans;
}

int main()
{
    int arr[7] = {2,5,-1,7,-3,-1,-2};
    int k = 4;
    cout << solve(arr,7,k) << endl;

    return 0;
}