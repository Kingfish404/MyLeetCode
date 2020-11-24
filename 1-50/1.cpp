#include <vector>
#include <map>
using namespace std;

// 这道题的关键在于哈希查找
// Runtime: 24 ms, faster than 51.74% of C++ online submissions for Two Sum.
// Memory Usage: 12.2 MB, less than 17.12% of C++ online submissions for Two Sum.

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> theMap;
        map<int, int> theLocate;
        int a = 0, b = 0;
        for (auto item : nums)
        {
            theMap[item] = 1;
            theLocate[item] = b++;
        }
        b = 0;
        for (auto item : nums)
        {
            if (theMap[target - item] == 1 && theLocate[target - item] != a)
            {
                b = theLocate[target - item];
                break;
            }
            a++;
        }
        return vector<int>{a, b};
    }
};
