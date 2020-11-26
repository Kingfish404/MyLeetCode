#include <iostream>

using namespace std;

class Solution
{
public:
    static int reverse(int x)
    {
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

int main()
{
    Solution s;
    cout << s.reverse(1534236469) << endl;
    return 0;
}
