
// here i apprached in two ways those code pasted below and dfinally the correct code is at code studio

//IMPORTANT QUESTIONS

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	//here i got till now basic aaproach that take 1st array compare its each element with elements of secomnd array and if they match print that elelment and then break the seconf array loop(beacause one element can map with one elemnet only) and also update secomnd array that element to negative numebr
    
    vector<int> ans;    

    for(int i=0;i<n;i++){  //for array 1
        int element = arr1[i];
            
            for(int j=0;j<m;j++){   // for array 2
                
                if(elemnt  < arr2[j]){
                    break;
                }
                if(element == arr2[j]){
                    ans.push_back(element);
                    arr2[j] = -1;
                    break;
                }
                
            }
    }
    return ans;
}
// but this code on submitttion gives TLE

//solution is i not used this given infi that 2. Both the arrays are sorted in non-decreasing order. so if mera first elemnt hi nahi comapre hota second array ke first element se toh aage check karne ki jaruruta hi nahi kyuki sab bade hi honge element aage 
// so i added this line of code  17 and 18 but then also tle came so i erased all code and made new 