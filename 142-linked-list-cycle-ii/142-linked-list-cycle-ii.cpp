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
    ListNode *detectCycle(ListNode *head) {
        
        ListNode* q1 = head;
        
        ListNode* q = q1;
        
        ListNode* a = q;
        
        ListNode* b = q;
        
        while(b != NULL and b->next != NULL) {
            
            a = a->next;
            
            b = b->next->next;
            
            if(a == b) {
                
                break;
                
            }
            
        }
        
        if(b == NULL || b->next == NULL) {
            
            return NULL;
            
        }
        
        b = q;
        
        while(a != b) {
            
            a = a->next;
            
            b = b->next;
            
        }
        
        return a;
        
    }
    
};