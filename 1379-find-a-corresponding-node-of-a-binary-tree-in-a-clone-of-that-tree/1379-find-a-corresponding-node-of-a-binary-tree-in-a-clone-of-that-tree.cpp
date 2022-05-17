/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    
    TreeNode* value1 = NULL;
    
    void valueNodE(TreeNode* cloned, int values) {
        
        if(cloned == NULL) {
            return;
        }
        valueNodE(cloned->left, values);
        if(cloned->val == values) value1 = cloned;
        valueNodE(cloned->right, values);
        
    }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        if(cloned == NULL) {
            return NULL;
        }
        
        int value = target->val;
        
        valueNodE(cloned, value);
        
        return value1;
    }
};