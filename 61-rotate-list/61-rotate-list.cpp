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
    ListNode* rotateRight(ListNode* head, int q) {
        
        ListNode* it = head,*fast = it,*slow = it,*ansresult;
        
        if(it == NULL or it->next == NULL) {
            return it;
        }
        
        int n = 0;
        while(slow) {
            slow = slow->next;
            n++;
        }
        q = q%n;
        if(q == 0) {
            return it;
        }
        slow = it;
        while(q--) {
            fast = fast->next;
        }
        
        while(fast != NULL and fast->next != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        
        ansresult = slow->next;
        slow->next = NULL;
        fast->next = it;
        
        return ansresult;
    }
};