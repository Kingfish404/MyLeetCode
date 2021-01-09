#include <vector>
using namespace std;

// 主要是vector类的erase方法
// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Remove Element.
// Memory Usage: 9.3 MB, less than 18.46% of C++ online submissions for Remove Element.

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(;i<nums.size();i++)
        {
            if(nums[i]==val)
            {
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return i;
    }
};