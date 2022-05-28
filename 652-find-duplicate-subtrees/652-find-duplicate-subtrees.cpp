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
    unordered_map<string,vector<TreeNode*>> map;
    string helper(TreeNode* root) {
        if(root == NULL) {
            return "";
        }
        
        string leftstr = helper(root->left);
        string rightstr = helper(root->right);
        
        string rootstr = "L"+leftstr+"L"+to_string(root->val)+"R"+rightstr+"R";
        map[rootstr].push_back(root);
        
        return rootstr;
        
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        
        helper(root);
        vector<TreeNode*> v;
        for(auto [x,y] : map) {
            if(y.size() >= 2) {
                v.push_back(y[0]);
            }
        }
        
        return v;
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};