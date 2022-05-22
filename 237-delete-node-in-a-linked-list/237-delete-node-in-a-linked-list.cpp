/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* q = node;
        
        ListNode* q1 = q;
        
        q1->val = q1->next->val;
        
        q1->next = q1->next->next;
        
        // return //;
        
    }
    
};