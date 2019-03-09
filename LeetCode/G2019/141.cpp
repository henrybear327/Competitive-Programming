/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        if (head == NULL)
            return false;
        ListNode *slow = head, *fast = head->next;
        while (slow != NULL && fast != NULL) {
            if (slow == fast)
                return true;
            slow = slow->next;
            if (fast->next != NULL)
                fast = fast->next->next;
            else
                fast = NULL;
        }

        return false;
    }
};
