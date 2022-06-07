/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class BSTIterator {
public:
    stack<TreeNode*> stA;
    bool reverse;
    
    BSTIterator(TreeNode* root,bool isReverse) {
        reverse = isReverse;
        pushA(root);
    }
    
    int next() {
        TreeNode* t = stA.top();
        stA.pop();
        if(reverse) {
            pushA(t->left);
        }
        else {
            pushA(t->right);
        }
        return t->val;
    }
    
    bool hasNext() {
        return stA.size();
    }
    
    private:
    void pushA(TreeNode* q) {
        while(q != NULL) {
            stA.push(q);
            if(reverse) {
                q = q->right;
            }
            else { 
                q = q->left;
            }
        }
    }
};
class Solution {
public:
    bool findTarget(TreeNode* root, int q1) {
        BSTIterator l(root,0);
        BSTIterator h(root,1);
        
        int i = l.next();
        int j = h.next();
        
        while(i < j) {
            if(i+j == q1) {
                return 1;
            }
            else if(i+j < q1) {
                i = l.next();
            }
            else {
                j = h.next();
            }
        }
        return 0;
    }
};