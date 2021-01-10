#include <vector>

using namespace std;

// 其实题目简单，难点在优化，目前还可以再优化
// Runtime: 100 ms, faster than 5.47% of C++ online submissions for Median of Two Sorted Arrays.
// Memory Usage: 90.1 MB, less than 13.64% of C++ online submissions for Median of Two Sorted Arrays.

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> nums_all;
        while (!nums1.empty() || !nums2.empty())
        {
            while (!nums1.empty() && (!nums2.empty() && nums1.front() < nums2.front() || nums2.empty()))
            {
                nums_all.push_back(nums1.front());
                nums1.erase(nums1.begin());
            }
            while (!nums2.empty() && (!nums1.empty() && nums1.front() >= nums2.front() || nums1.empty()))
            {
                nums_all.push_back(nums2.front());
                nums2.erase(nums2.begin());
            }
        }
        unsigned int size_half_all = nums_all.size() / 2;
        if (nums_all.size() % 2 == 0)
        {
            return (nums_all.at(size_half_all - 1) + nums_all.at(size_half_all)) / 2.0;
        } else
        {
            return nums_all.at(size_half_all);
        }
    }
};