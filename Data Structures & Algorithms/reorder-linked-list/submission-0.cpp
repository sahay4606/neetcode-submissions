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
    void reorderList(ListNode* head) 
    {
        ListNode *fast = head;
        ListNode *slow = head;
       

        while(fast && fast -> next)
        {
            fast = fast->next->next;
            slow = slow->next;

        }
         ListNode *cur =slow->next;
         slow->next = nullptr;
         ListNode *prev= nullptr;

         while(cur)
         {
            ListNode* next = cur->next; //not slow ->next
            cur->next = prev;
            prev = cur;
            cur = next;
         }


         while(prev && head)
         {
            ListNode * temp1 = head->next;
            ListNode * temp2 = prev->next;


            head->next  = prev;
            prev->next = temp1;

            head = temp1;
            prev = temp2;
            

         }








        
    }
};
