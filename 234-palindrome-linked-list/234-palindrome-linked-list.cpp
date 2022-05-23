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
    
    bool isPalindrome(ListNode* head) {
        
        vector<int> v;
        
        ListNode* q1 = head;
        
        ListNode* q = q1;
        
        while(q) {
            
            v.push_back(q->val);
            
            q = q->next;
            
        }
        
        int i = 0;
        
        int n = v.size();
        
        int j = n-1;
        
        while(i < j) {
            
            if(v[i] != v[j]) {
                
                return 0;
                
            }
            
            i++;
            
            j--;
            
        }
        
        return true;
        
    }
    
    
};