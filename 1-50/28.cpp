#include <string>
using namespace std;

// Runtime: 8 ms, faster than 16.30% of C++ online submissions for Implement strStr().
// Memory Usage: 7.2 MB, less than 48.61% of C++ online submissions for Implement strStr().

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        return haystack.find(needle);
    }
};