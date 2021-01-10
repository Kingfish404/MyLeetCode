#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if (s.empty())
        {
            return 0;
        }
        bool chars_mark[400] = {false};
        int front = 0, back = 0, max = 0;
        for (auto i:s)
        {
            if (!chars_mark[i])
            {
                chars_mark[i] = true;
            } else
            {
                while (s[front] != i)
                {
                    chars_mark[s[front]] = false;
                    front++;
                }
                front++;
            }
            if (back - front > max)
            {
                max = back - front;
            }
            back++;
        }
        return max + 1;
    }
};

int main()
{
    string str = "abcabcbb";
    Solution s;
    cout << s.lengthOfLongestSubstring(str) << endl;
    return 0;
}