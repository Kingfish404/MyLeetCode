#include<vector>
#include<string>

using namespace std;

// 本题没啥技巧，就是硬算
// 123 / 123 test cases passed.
// Status: Accepted
// Runtime: 4 ms
// Memory Usage: 9.7 MB

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.empty())
        {
            return "";
        }
        string str = strs.front();
        unsigned long long longest = str.size();
        int j;

        for (auto i:strs)
        {
            for (j = 0; j < longest && j < i.size(); j++)
            {
                if (str[j] == i[j])
                {
                    continue;
                } else
                {
                    break;
                }
            }
            longest = j;
        }
        return str.substr(0, longest);
    }
};