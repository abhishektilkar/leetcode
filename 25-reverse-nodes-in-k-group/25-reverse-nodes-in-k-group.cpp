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
    ListNode* reverseKGroup(ListNode* head, int qi) {
        
        ListNode* q1 = head;
        
        ListNode* q = q1;
        
        ListNode* a = q;
        
        ListNode* ansresult = new ListNode(-1);
        
        ansresult->next = q1;
        
        int n = 0;
        
        while(a) {
            
            n++;
            
            a = a->next;
            
        }
        
        if(ansresult->next == NULL) {
            
            cout << "1";
            
        }
        
        ListNode *b = ansresult;
        
        ListNode *l = ansresult;
        
        a = ansresult;
        
        // cout << n; //
        
        while(n >= qi) {
            
            b = a->next;
            
            l = b->next;
            
            for(int i=1;i<qi;i++) {
                
                b->next = l->next;
                
                cout << i << " " << n << endl;
                
                l->next = a->next;
                
                a->next = l;
                
                l = b->next;
                
            }
            
            a = b;
            
            n -= qi;
            
        }

        return ansresult->next;
        
    }
    
};