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
class Solution {
public:
    void pal(TreeNode* root, long minv, long maxv, int &v) {
        if(v == 0) {
            return;
        }
        if(root == NULL) {
            return;
        }
        if(minv < root->val and root->val < maxv) {
            pal(root->left,minv,root->val,v);
            pal(root->right,root->val,maxv,v);
        }
        else {
            v = 0;
        }
    }
    bool isValidBST(TreeNode* root) {
        
        int v = 1;
        long minv = -2147483649;
        long maxv = 2147483648;
        pal(root, minv, maxv, v);
        return v;
    }



















};