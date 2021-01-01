#include <iostream>
#include <stack>

using namespace std;

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

int main()
{
    Solution s;
    cout << s.isValid("({{{{}}}))") << endl;
    return 0;
}