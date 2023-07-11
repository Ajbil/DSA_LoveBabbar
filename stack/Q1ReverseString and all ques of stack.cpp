// we need to reverse a string using stack we did it earlier using 2 pointer approach
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "arihant";
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    // isme top, push aur pop theeno fun kaam aagaye stack ke  its s.c is O(n) which is not good as comppared to two pointer method where it was o(1)
    string ans = "";
    while (!s.empty())
    {
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }

    cout << "the reversed string is " << ans << endl;
    return 0;
}

// further in video no 60 love bhaiya diid these all ques
/*

Questions Links:
Delete Middle Element in Stack:https://bit.ly/3ovTIu2  -- > very nice logical ques use of recursion also

Valid Parenthesis:https://bit.ly/34kxPaq  -- >very very famous ques came in many interiew

InsertAtBottom in Stack:https://bit.ly/34qqmGL -- > same vahi recursion use aayega isme bhi

Reverse a Stack using recursion:https://bit.ly/3HCBnD4  - > recursion used

Sort a Stack using recursion:https://bit.ly/3snpr1B  --> same using recursion    NICE QUES

Redundant Brackets:https://bit.ly/3srTkOv  -- > nice ques

Minimum bracket Reversal:https://bit.ly/3GAYRr5  -> nice medium level ques  CAME IN MY BNY MELON CODING ROUND


IN VIDEO NO 61 TO 664 WE DID ALL HARD LEVEL QUES OF STACK LLINKS ARE ATTACHED BELOW

/// a medium level ques -> next smaller elemnet -> https://bit.ly/34GjYL4 -> solved used stack here nice ques

1)largest rectangle in histogram -> https://leetcode.com/problems/largest-rectangle-in-histogram/  asked many times 

2)  Celebrity Problem :  -> https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1  very famous came in my coding test also THIS WAS IN DAA COURSE 
    THERE ARE MANY  MORE APPROACHES TO SOLVE THIS SEE THOSE ALSO IT IS AN IMP QUES 
    
3) Max Rectangle in Binary Matrix with all 1's  -> https://practice.geeksforgeeks.org/problems/max-rectangle/1
here space complexity is O(m) i.e no of column prsent

4)  "N" Stacks in an Array || Stack Hard Question -> https://www.youtube.com/watch?v=lrSXKLmnMV8&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=64&ab_channel=CodeHelp-byBabbar
// we diid a ques when wee started stack topic 2 stacks in an array its like that but hard level


5) Design a stack that supports getMin() in O(1) time and O(1) extra space -> https://bit.ly/3LpVPJM 

THESE LAST TWO QUES ARE DIFFICULT AND MUST UNDERSTAND THEM THEY ARE IMPORTANT ALSO FOR INTERVIIEW 
*/