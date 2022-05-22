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
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode* q1 = headA;
        
        ListNode* q2 = headB;
        
        ListNode* a = q1;
        
        ListNode* b = q2;
        
        while(a != b) {
            
            a = a == NULL ? q2 : a->next;
            
            b = b == NULL ? q1 : b->next;
            
        }
        
        return a;
        
    }
    
};