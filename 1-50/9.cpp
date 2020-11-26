#include <iostream>

// 本题没啥技巧，就是硬算
// Runtime: 24 ms, faster than 14.94% of C++ online submissions for Palindrome Number.
// Memory Usage: 6.4 MB, less than 15.53% of C++ online submissions for Palindrome Number.

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
        {
            return false;
        } else if (x == 0)
        {
            return true;
        } else
        {
            int count = 0, y = x;
            while (y)
            {
                y /= 10;
                count++;
            }
            while (count>1)
            {
                y = int(pow(10,count-1));
                int b = x/y;
                x=x%y;
                if (x % 10 != b)
                {
                    return false;
                }
                x /= 10;
                count-=2;
            }
            return true;
        }
    }
};