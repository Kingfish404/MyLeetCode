#include <vector>
using namespace std;

// 此题主要考察vector类的使用
// Runtime: 148 ms, faster than 13.35% of C++ online submissions for Remove Duplicates from Sorted Array.
// Memory Usage: 14.1 MB, less than 14.68% of C++ online submissions for Remove Duplicates from Sorted Array.

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
        {
            return 0;
        }
        for(int i=0,j;i<nums.size()-1;i++)
        {
            j=i;
            while(j<nums.size()-1 && nums.at(j)==nums.at(j+1))
            {
                j++;
            }
            nums.erase(nums.begin()+i,nums.begin()+j);
        }
        return nums.size();
    }
};