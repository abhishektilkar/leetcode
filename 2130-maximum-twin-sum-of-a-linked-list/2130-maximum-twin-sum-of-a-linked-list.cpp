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
    int pairSum(ListNode* head) {
        
        ListNode* slow, *high, *p;
        p = head;
        slow = head;
        high = head;
        vector<int> v;
        while(high != NULL) {
            v.push_back(slow->val);
            slow = slow->next;
            high = high->next->next;
        }
        reverse(v.begin(),v.end());
        int maxval = 0;
        int i=0;
        while(slow != NULL) {
            maxval = max(slow->val+v[i],maxval);
            slow = slow->next;
            i++;
        }
        return maxval;

    }
};