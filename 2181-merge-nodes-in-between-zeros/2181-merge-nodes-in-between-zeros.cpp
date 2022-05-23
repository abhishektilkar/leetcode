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
    
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode* q1 = head;
        
        ListNode* q = q1;
        
        ListNode* a = q;
        
        a = a->next;
        
        ListNode* b;
        
        b = a;
        
        while(a != NULL and a->next != NULL) {
            
            b = a;
            
            int sum = 0;
            
            while(b != NULL and b->val != 0) {
               
                sum += b->val;
                
                b = b->next;
                
            }
            
            a->val = sum;
            
            a->next = b->next;
            
            a = a->next;
            
        }
        
        return q->next;
        
    }
    
    
};