#include <iostream>

using namespace std;

class Solution
{
public:
    static bool isPalindrome(int x)
    {
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

int main()
{
    cout << Solution::isPalindrome(121) << endl;
    return 0;
}
