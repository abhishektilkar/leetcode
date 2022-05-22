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

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* q = new ListNode(-1);
        
        ListNode* a = l1;
        
        ListNode* b = l2;
        
        int carry = 0;
        
        ListNode* q1 = q;
        
        while(a != NULL and b != NULL) {
            
            int sum = a->val + b->val + carry;
            
            a = a->next;
            
            b = b->next;
            
            carry = sum/10;
            
            sum = sum%10;
            
            q->next = new ListNode(sum);
            
            q = q->next;
            
        }
        
        while(a != NULL) {
            
            int sum = a->val + carry;
            
            a = a->next;
            
            carry = sum/10;
            
            sum = sum%10;
            
            q->next = new ListNode(sum);
            
            q = q->next;
            
        }
        
        while(b != NULL) {
            
            int sum = b->val + carry;
            
            b = b->next;
            
            carry = sum/10;
            
            sum = sum%10;
            
            q->next = new ListNode(sum);
            
            q = q->next;
            
        }
        
        if(carry == 1) {
            
            q->next = new ListNode(1);
            
        }
        
        return q1->next;
        
    }
    
};