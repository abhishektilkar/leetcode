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
    
    void inorder(TreeNode* q1,int l,map<int,map<int,vector<int>>> &map1,int h,int aA) {
        if(q1 == NULL) {
            return;
        }
        
        map1[l][h].push_back(q1->val);
        
        inorder(q1->left,l-1,map1,h+1,aA);
        inorder(q1->right,l+1,map1,h+1,aA);

    }
    
    
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int,map<int,vector<int>>> map1;
        
        inorder(root,0,map1,0,1);
        
        
        
        
        
        
        vector<vector<int>> v1;
        for(auto p : map1){
            vector<int> col;
            for(auto q : p.second){
                sort(q.second.begin(),q.second.end());
                col.insert(col.end(),q.second.begin(),q.second.end());
            }
            v1.push_back(col);
        }
        
        return v1;
    }





};