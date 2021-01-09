#include <vector>
using namespace std;

// easy
// Runtime: 12 ms, faster than 8.74% of C++ online submissions for Search Insert Position.
// Memory Usage: 9.9 MB, less than 60.00% of C++ online submissions for Search Insert Position.

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i=0;
        for(;i<nums.size();i++)
        {
            if(nums[i]>=target)
            {
                return i;
            }
        }
        return i;
    }
};