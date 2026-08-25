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
    ListNode* reverseList(ListNode* head) 
    {
        
        ListNode *prev = nullptr;
        ListNode *curr = head;

        while(curr)
        {
            ListNode *nextTemp = curr->next;// storing the forward one
            curr->next = prev; // most imp
            // the next 2 lines are for shifting forward
            prev = curr;
            curr = nextTemp;



        }

        return prev;

        
    }
};
