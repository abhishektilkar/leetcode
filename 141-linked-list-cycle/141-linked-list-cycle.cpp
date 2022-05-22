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
    bool hasCycle(ListNode *head) {
        
        ListNode* q1 = head;
        
        ListNode* q = q1;
        
        ListNode* a = q;
        
        ListNode* b = q1;
        
        while(b != NULL and b->next != NULL) {
            
            a = a->next;
            
            b = b->next->next;
            
            if(a == b) {
                
                return true;
                
            }
            
        }
        
        return 0;
        
    }
};