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
        
        while(a != NULL) {
            
            a->val = 0-a->val;

            a = a->next;
            
        }
        
        while(b != NULL) {
            
            if(b->val < 0) {
                
                break;
                
            }
            
            b = b->next;
            
        }
        
        a = q1;
        
        while(a != NULL) {
            
            a->val = 0-a->val;

            a = a->next;
            
        }
        
        return b;
        
    }
    
};