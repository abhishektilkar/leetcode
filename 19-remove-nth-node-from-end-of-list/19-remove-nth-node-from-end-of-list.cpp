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
    ListNode* removeNthFromEnd(ListNode* head, int ana) {
        
        ListNode* q = head;
        
        ListNode* q1 = q;
        
        ListNode* a = q1;
        
        ListNode* b = q1;
        
        if(q1->next == NULL) {
            
            return NULL;
            
        }
        
        
        while(ana-- and b != NULL) {
            
            b = b->next;
            
        }
        
        if(b == NULL) {
            
            return a->next;
            
        }
        
        while(b != NULL and b->next != NULL) {
            
            a = a->next;

            b = b->next;
            
        }
        
        a->next = a->next->next;
        
        return q1;
                
    }
    
};