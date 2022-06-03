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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root){
        vector<vector<int>> v;
        deque<TreeNode*> q;
        if(root == NULL) {
            return v;
        }
        q.push_front(root);
        int j = 0;
        while(q.size()) {
            j++;
            int n = q.size();
            vector<int> vl;
            if(j&1){ 
                for(int i=0;i<n;i++) {
                    TreeNode* cur = q.front();
                    q.pop_front();
                    vl.push_back(cur->val);

                    if(cur->left) {
                        q.push_back(cur->left);
                    }
                    if(cur->right) {
                        q.push_back(cur->right);
                    }
                }
            }
            else {
                for(int i=0;i<n;i++) {

                    TreeNode* cur = q.back();
                    q.pop_back();
                    vl.push_back(cur->val);

                    if(cur->right) {
                        q.push_front(cur->right);
                    }
                    if(cur->left) {
                        q.push_front(cur->left);
                    }
                }
            }
            v.push_back(vl);
        }
        return v;
    }
};