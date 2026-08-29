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

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode *fast = head;
       

        // if head is displaced

        ListNode *dum = new ListNode(0);
        dum->next = head;

         ListNode *slow = dum;
        

        while(n-- )
        {
            fast = fast->next;

        }

        while(fast )
        {
            fast = fast->next;
            slow = slow->next;

        }

        slow->next = slow->next->next;

        return dum->next;

    }
};
