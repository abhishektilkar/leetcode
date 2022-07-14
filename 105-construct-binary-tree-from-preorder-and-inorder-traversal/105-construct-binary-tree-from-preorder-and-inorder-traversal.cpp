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
   
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int sp,int ep, int si,int ei) {
        
        if(sp > ep || si > ei) {
            return NULL;
        }
        
        int v = preorder[sp];
        TreeNode* root = new TreeNode(preorder[sp]);
        
        int i=0;
        while(inorder[si+i] != v) {
            i++;
        }
        
        root->left = build(preorder,inorder, sp+1,sp+i,si,si+i-1);
        root->right = build(preorder, inorder, sp+i+1,ep,si+i+1,ei);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        return build(preorder,inorder,0,n-1,0,n-1);
    }
};