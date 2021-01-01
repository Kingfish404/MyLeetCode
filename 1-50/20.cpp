#include <iostream>
#include <stack>
using namespace std;

// 本题主要考察用栈存储状态
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
// Memory Usage: 6.7 MB, less than 75.70% of C++ online submissions for Valid Parentheses.

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        for (auto i:s)
        {
            switch (i)
            {
                case '(':
                case '[':
                case '{':
                    stack.push(i);
                    break;
                case ')':
                    if (!stack.empty() && stack.top() == '(')
                    {
                        stack.pop();
                        break;
                    }
                    return false;

                case ']':
                    if (!stack.empty() && stack.top() == '[')
                    {
                        stack.pop();
                        break;
                    }
                    return false;

                case '}':
                    if (!stack.empty() && stack.top() == '{')
                    {
                        stack.pop();
                        break;
                    }
                    return false;

            }
        }
        if (!stack.empty())
        {
            return false;
        }
        return true;
    }
};