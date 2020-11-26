#include <iostream>

// 这道题的关键在于判断是否溢出
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Reverse Integer.
// Memory Usage: 6.3 MB, less than 29.83% of C++ online submissions for Reverse Integer.

class Solution {
public:
    int reverse(int x) {
        int y = 0, pop;
        while (x)
        {
            pop = x % 10;
            if (y > INT_MAX / 10 || (y == INT_MAX / 10 && pop > 7))
            {
                return 0;
            }
            if (y < INT_MIN / 10 || (y == INT_MIN / 10 && pop < -8))
            {
                return 0;
            }
            y = y * 10 + pop;
            x /= 10;
        }
        return y;
    }
};