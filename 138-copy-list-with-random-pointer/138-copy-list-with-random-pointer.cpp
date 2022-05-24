/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        Node* it = head, *ansresult,*a = it,*ansIt,*b = it,*q;
        ansresult = new Node(-1);
        if(a == NULL) {
            return NULL;
        }
        
        while(a != NULL) {
            b = a->next;
            q = new Node(a->val);
            a->next = q;
            q->next = b;
            a=b;
        }
        
        a = it;
        b = it->next;
        while(a != NULL) {
            b = a->next;
            if(a->random != NULL) {
                b->random = a->random->next;
            }
            a = b->next;
        }
        
        a = it;
        b = it->next;
        ansIt = ansresult;
        
        while(a != NULL) {
            b = a->next;
            a->next = b->next;
            ansIt->next = b;
            a = b->next;
            ansIt = ansIt->next;
        }
        
        return ansresult->next;
    }
};