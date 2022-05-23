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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode* q1 = head, *q = q1, *a = q, *z = q;
        int mind = 100001, maxd = 0, i=1, fp = 100001, lp = -100001;
        
        q = q->next;
        while(q != NULL and q->next != NULL) {
            i++;
            z = q->next;
            
            if((a->val < q->val and q->val > z->val) or (a->val > q->val and q->val < z->val)) {
                mind = min(mind,i-lp);
                if(fp == 100001) {
                    fp = i;
                }
                lp = i;
            }
            
            
            // Update valuE //
            a = q;
            q = z;
        }
        maxd = lp-fp;
        if(mind >= i+1 or maxd <= 0) {
            return {-1,-1};
        }
        return {mind,maxd};
        
    }
};