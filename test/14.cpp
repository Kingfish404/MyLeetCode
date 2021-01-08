#include <iostream>
#include <vector>
#include <string>

using namespace std;

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


int main()
{
    Solution s;
    vector<string> strs;
    strs.emplace_back("ab");
    strs.emplace_back("a");
    strs.emplace_back("ar");
    string finalStr = s.longestCommonPrefix(strs);

    cout << finalStr << endl;
    return 0;
}