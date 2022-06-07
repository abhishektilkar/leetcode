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
    BSTIterator(TreeNode* root) {
        pushA(root);
    }
    
    int next() {
        TreeNode* t = stA.top();
        stA.pop();
        pushA(t->right);
        return t->val;
    }
    
    bool hasNext() {
        return stA.size();
    }
    
    private:
    void pushA(TreeNode* q) {
        for(;q != NULL; stA.push(q), q = q->left);
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */