
// 链表的合并
// Runtime: 4 ms, faster than 98.64% of C++ online submissions for Merge Two Sorted Lists.
// Memory Usage: 15.3 MB, less than 61.55% of C++ online submissions for Merge Two Sorted Lists.

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

class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        if (l1 == nullptr && l2 == nullptr)
        {
            return nullptr;
        } else if (l1 == nullptr)
        {
            return l2;
        } else if (l2 == nullptr)
        {
            return l1;
        }
        ListNode *head = l1->val < l2->val ? l1 : l2, *p = head,*q;
        if (l1->val < l2->val)
        {
            l1 = l1->next;
        } else
        {
            l2 = l2->next;
        }

        while (l1 || l2)
        {
            p->next = l1;
            q=p;
            while (l1 && (l2 == nullptr || l1->val <= l2->val))
            {
                q=l1;
                l1 = l1->next;
            }
            p=q;

            p->next = l2;
            q=p;
            while (l2 && (l1 == nullptr || l2->val <= l1->val))
            {
                q=l2;
                l2 = l2->next;
            }
            p=q;
        }
        return head;
    }
};