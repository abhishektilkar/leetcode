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
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode* a = list1;
        
        ListNode* b = list2;
        
        ListNode* q = new ListNode(-1);
        
        ListNode* q1 = q;
        
        while(a != NULL and b != NULL) {
            
            if(a->val <= b->val) {
                
                q->next = a;
                
                a = a->next;
                
            }
            else {
                
                q->next = b;
                
                b = b->next;
                
            }
            
            q = q->next;
            
            q->next = NULL;
            
        }
        
        if(a == NULL) {
            
            q->next = b;
            
        }
        
        if(b == NULL) {
            
            q->next = a;
            
        }
        
        return q1->next;
        
    }
    
};