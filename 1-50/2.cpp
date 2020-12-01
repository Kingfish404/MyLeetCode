/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode
{
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr)
    {}

    ListNode(int x) : val(x), next(nullptr)
    {}

    ListNode(int x, ListNode *next) : val(x), next(next)
    {}
};

// 这题主要考察指针的使用，而且样例中l2似乎比l1要长
// Runtime: 28 ms, faster than 90.56% of C++ online submissions for Add Two Numbers.
// Memory Usage: 71.5 MB, less than 49.50% of C++ online submissions for Add Two Numbers.

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0;
        ListNode *l = nullptr, **p = &l;
        while (l1 || l2 || sum > 0)
        {
            if (l1)
            {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2)
            {
                sum += l2->val;
                l2 = l2->next;
            }
            *p = new ListNode(sum % 10);
            p = &(*p)->next;
            sum /= 10;
        }
        return l;
    }
};