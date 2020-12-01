#include <iostream>

using namespace std;

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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
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


int main()
{
    Solution s;
    ListNode *l1 = nullptr, *l2 = nullptr, *l = nullptr, *preL = nullptr;

    l1 = new ListNode(9);
    l2 = new ListNode(9);

    l = s.addTwoNumbers(l1, l2);

    while (l)
    {
        cout << l->val;
        preL = l;
        l = l->next;
        delete preL;
    }
    delete l1, l2, l;
    return 0;
}
