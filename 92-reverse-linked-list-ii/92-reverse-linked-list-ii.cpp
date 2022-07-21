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
    ListNode* ot = NULL;
    ListNode* oh = NULL;
    void ADDaAaSAge(ListNode* q,ListNode* &oh){
        if(oh == NULL){
            ot = q;
            oh = q;
        }
        else{
            q->next = oh;
            oh = q;
        }
    }
    // ListNode* 
    void ReveRRSeLiSTS(ListNode* head){
        ListNode* q = head;
        while(q != NULL){
            ListNode* aage = q->next;
            q->next = NULL;
            ADDaAaSAge(q,oh);
            q = aage;
        }
        // return oh;
        // hi
        // heLLo
        // IShA
    }
    int LeNgTh(ListNode* q){
        int CouNT = 0;
        while(q != NULL){
            CouNT++;
            q = q->next;
        }
        return CouNT;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right){
        ListNode* q1 = head;
        int N = LeNgTh(q1);
        if(left == right || left == N){
            return q1;
        }
        ListNode* th = NULL;
        ListNode* tt = NULL;
        ListNode* h = NULL;
        ListNode* t = NULL;
        ListNode* q12 = q1;
        int q = 0;
        for(int i=1;i<=N;i++){
            if(i == left-1){
                th = q1;
            }
            if(i == left){
                h = q1;
            }
            if(i == right){
                t = q1;
            }
            if(i == right+1){
                tt = q1;
            }
            q1 = q1->next;
        }
        // if(th){}
        // i
        if(th != NULL){
            th->next = NULL;
        }
        t->next = NULL;
        ReveRRSeLiSTS(h);
        // i
        // a
        // cout<<oh->val<<"\n";
        // cout<<ot->val;
        // otp
        ot->next = tt;
        if(left == 1){
            th = NULL;
            // h = q12;
            return oh;
        }
        th->next = oh;
        return q12;
    }
};