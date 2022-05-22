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
    
    ListNode* deleteMiddle(ListNode* head) {
        
        ListNode* q1 = head;
        
        ListNode* q = q1;
        
        if(q->next == NULL) {
            
            return NULL;
            
        }
        
        ListNode* a = q;
        
        ListNode* b = q->next;
        
        while(b->next != NULL and b->next->next != NULL) {
            
            a = a->next;
            
            b = b->next->next;
            
        }
        
        a->next = a->next->next;
        
        return q;
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
};