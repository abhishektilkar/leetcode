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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* q1 = new ListNode(-102);
        ListNode* t = q1;
        
        while(head) {
            if(t->val != head->val) {
                t->next = head;
                t = t->next;
            }
            head = head->next;
        }
        t->next = NULL;
        return q1->next;
    }




























};