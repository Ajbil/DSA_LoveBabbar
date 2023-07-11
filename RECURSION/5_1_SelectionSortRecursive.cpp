/*

RECURSIVE ELECTION SORT CODE BUT SEE GFG ARTICLE ONCE 

class Solution {
    private:
    void selectionSort(vector<int>& nums, int startIndex, int size) //pass by refernce kiya 
{
    if ( startIndex >= size - 1 )
        return; //retrun recursively
        
    int minIndex = startIndex;
        
    for ( int index = startIndex + 1; index < size; index++ )
    {
        if (nums[index] < nums[minIndex] )
            minIndex = index;
    }
        
        swap(nums[startIndex],nums[minIndex]);
    // int temp = nums[startIndex];
    // nums[startIndex] = nums[minIndex];
    // nums[minIndex] = temp;
    selectionSort(nums, startIndex + 1,size);  //recursive call
}
public:
    vector<int> sortArray(vector<int>& nums) {
        int arrsize = nums.size();
        selectionSort(nums,0,arrsize);
        return nums; // pass by reference kiya isliye kar paya nums aaarya mai changes 
    }
};



*/