#include <string>
using namespace std;

// 实现一个类似js的find函数，已出现的标记
// Runtime: 8 ms, faster than 89.79% of C++ online submissions for Longest Substring Without Repeating Characters.
// Memory Usage: 7.3 MB, less than 89.79% of C++ online submissions for Longest Substring Without Repeating Characters.

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        if(s.empty())
        {
            return 0;
        }
        bool chars_mark[120] = {false};
        unsigned int front = 0, back = 0, max = 0;
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
        return max+1;
    }
};