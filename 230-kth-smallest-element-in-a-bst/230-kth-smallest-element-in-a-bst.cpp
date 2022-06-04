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
    void value(TreeNode* q1,int q,int &i,int &vali) {
        if(q1 == NULL) {
            return;
        }
        
        value(q1->left,q,i,vali);
        i++;
        if(i == q) {
            vali = q1->val;
        }
        
        value(q1->right,q,i,vali);
    }
    
    int kthSmallest(TreeNode* root, int q) {
        int i = 0;
        int vali = 0;
        value(root,q,i,vali);
        return vali;
        
    }





















};