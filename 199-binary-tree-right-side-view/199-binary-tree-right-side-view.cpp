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
    // TreeNode*
    void abhi(TreeNode* q1,vector<int> &v,int level,int &maxlevel){
        if(q1 == NULL){
            return;
        }
        if(level == v.size()){
            v.push_back(q1->val);
        }
        else{                           //
            v[level] = q1->val;         //     comment this and do reverse preorder traversal;
        }                               //
        abhi(q1->left,v,level+1,maxlevel);
        abhi(q1->right,v,level+1,maxlevel);
    }
    vector<int> rightSideView(TreeNode* root){
        TreeNode* q = root;
        TreeNode* q1 = q;
        vector<int> v;
        int level = 0;
        int maxlevel = 1;
        abhi(q1,v,level,maxlevel);
        return v;
    }
};