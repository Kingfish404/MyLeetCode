#include <iostream>
#include <vector>
#include<map>

using namespace std;

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

int main()
{
    Solution s;
    map<int, int> theMap;
    vector<int> nums = {3, 2, 4};
    int target = 6;

    auto final = s.twoSum(nums, target);

    for (auto item:final)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
