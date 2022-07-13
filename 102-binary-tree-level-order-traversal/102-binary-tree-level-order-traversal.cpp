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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        
        
        
        
        
                
        
        
        
        vector<vector<int>> v;

        if(root == NULL) {
            return v;
        }
        queue<TreeNode*> que;
        que.push(root);
        

        while(!que.empty()) {
            
            int n = que.size();
            vector<int> v1;
            
            for(int i=0;i<n;i++) {
                TreeNode* top1 = que.front();
                v1.push_back(top1->val);
                que.pop();
                if(top1->left) {
                    que.push(top1->left);
                    
                }
                if(top1->right) {
                    que.push(top1->right);
                }
            }
            
            v.push_back(v1);
        }
        return v;
    }
};