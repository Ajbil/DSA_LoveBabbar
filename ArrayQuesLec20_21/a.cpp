//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{

public:
    vector<int> help_classmate(vector<int> arr, int n)
    {
        // aditya verma stack series -> this is bascailly NEAREST SMALLER ELEMENT problem in language form
        /// must read ponit number 6 in DSA concepts docs under heading STACK PLAYLIST 0F ADITYA VERMA

        vector<int> ans;
        stack<int> s;
        // as we neeed next smaller to right i start traversal from n-1 index
        for (int i = n - 1; i >= 0; i--)
        {
            if (s.size() == 0)
            {
                ans.push_back(-1);
            }
            else if (s.top() < arr[i])
            {
                ans.push_back(s.top());
            }
            else if (s.size() > 0)
            {
                while (s.size() > 0 && s.top() > arr[i])
                {
                    s.pop();
                }
                if (s.size() == 0)
                {
                    ans.push_back(-1);
                }
                else if (s.top() < arr[i])
                {
                    ans.push_back(s.top());
                }
            }

            s.push(arr[i]); // current element ki processing ke baad usko stack mai puush karna mat bhoolna
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> array(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> array[i];
        }
        Solution obj;
        vector<int> result = obj.help_classmate(array, n);
        for (int i = 0; i < n; ++i)
        {
            cout << result[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends