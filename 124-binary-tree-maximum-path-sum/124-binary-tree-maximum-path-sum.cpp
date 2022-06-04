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
    int helper(TreeNode* root, int &maxs) {
        if(root == NULL) {
            return 0;
        }
        
        int l = helper(root->left,maxs);
        int h = helper(root->right,maxs);
        
        int maxv = max(l+root->val,h+root->val);
        maxv = max(maxv,root->val+l+h);
        maxv = max(maxv,root->val);
        maxs = max(maxs ,maxv);
        
        return max(l+root->val,max(h+root->val,root->val));

    }
    
    int maxPathSum(TreeNode* root) {
        int maxs = INT_MIN;
        helper(root,maxs);
        return maxs;
    }
};