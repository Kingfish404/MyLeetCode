# MyLeetCode

我的LeetCode刷题笔记

文件夹规范  
- num-num 对应题号内的解题代码
- random 随机题目
- test 个人测试用的代码存放位置

文件名规范  
```
题目号.文件类型

eg: 
1.cpp
```
源代码规范
```
环境设置
题目关键+评判结果
可以直接提交的代码

eg:
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

```

copyright@Jin Yu