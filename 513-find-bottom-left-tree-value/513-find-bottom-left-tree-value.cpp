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
    int findBottomLeftValue(TreeNode* root) {

        queue<pair<TreeNode*,int>> que;
        
        que.push({root,0});
        long ans = LONG_MIN;
        int h = -1;
        
        while(!que.empty()) {
            
            pair<TreeNode*,int> cur = que.front();
            que.pop();
            
            if(ans == LONG_MIN or (cur.second > h)) {
                ans = cur.first->val;
                h = cur.second;
            }
            
            if(cur.first->left) {
                que.push({cur.first->left,cur.second+1});
            }
            if(cur.first->right) {
                que.push({cur.first->right,cur.second+1});
            }
            
        }
        
        
        
        return (int)(ans);
    }











};