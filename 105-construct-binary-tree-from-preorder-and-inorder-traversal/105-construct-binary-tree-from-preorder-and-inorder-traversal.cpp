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
    TreeNode* createTreeI(vector<int>& preorder, vector<int>& inorder,int pre_i,int pre_l,int in_i,int in_l) {
        if(pre_i > pre_l or pre_i < 0 or pre_i >= preorder.size()) {
            return NULL;
        }
        
        TreeNode* q = new TreeNode(preorder[pre_i]);
        
        int i=0;
        while(preorder[pre_i] != inorder[in_i+i]) {
            i++;
        }
        // i = i-in_i;
        cout << pre_i << endl;
        q->left = createTreeI(preorder,inorder, pre_i+1, pre_i+i, in_i, in_i+i-1 );
        q->right = createTreeI(preorder,inorder, pre_i+i+1, pre_l, in_i+i+1, in_l);
            
        return q;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = inorder.size();
        return createTreeI(preorder,inorder,0,n-1,0,n-1);
    }
};