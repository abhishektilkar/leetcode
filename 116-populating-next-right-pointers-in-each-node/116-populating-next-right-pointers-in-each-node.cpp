/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        
        queue<Node*> q;
        if(root == NULL) {
            return NULL;
        }
        q.push(root);
        
        while(q.size()) {
            int n = q.size();
            Node* p = q.front();
            q.pop();
            
            if(p->left != NULL) {
                q.push(p->left);
            }
            if(p->right != NULL) {
                q.push(p->right);
            }
            
            for(int i=0;i<n-1;i++) {
                Node* cur = q.front();
                q.pop();
                if(cur->left != NULL) {
                    q.push(cur->left);
                }
                if(cur->right != NULL) {
                    q.push(cur->right);
                }
                p->next = cur;
                p = cur;
            }
        }
        return root;
    }
};