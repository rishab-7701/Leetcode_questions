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
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        //we  move fast two steps at a time and slow one step at a time

        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow; // slow will point to the middle node as we reach the end of the linked list
    }
};