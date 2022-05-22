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
    
    ListNode* reverseList(ListNode* head) {
        
        ListNode* q;

        ListNode* p;
        
        q = head;
        
        if(q == NULL) {
            
            return NULL;
            
        }
        
        else if(q->next == NULL) {
            
            return q;
            
        }
        
        else if(q->next->next == NULL) {
            
            p = q->next;
            
            p->next = q;
            
            q->next = NULL;
            
            return p;
            
        }
        
        ListNode* ansresult = reverseList(q->next);
        
        p = q->next;
        
        p->next = q;
            
        q->next = NULL;
        
        return ansresult;
        
    }
    
};