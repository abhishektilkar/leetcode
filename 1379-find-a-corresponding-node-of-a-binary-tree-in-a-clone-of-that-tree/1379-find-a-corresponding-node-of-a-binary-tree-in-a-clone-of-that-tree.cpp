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
    string path1 = "";
    
   void original1(TreeNode* original, TreeNode* target,string path) {
       
       if(original == NULL) {
           return;
       }
       
       original1(original->left, target, path+"L");
       
       
       if(original == target) {
           path = path+"I";
           path1 = path;
           return;
       }
       
       original1(original->right, target, path+"R");

       
   }
    
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        
        original1(original, target, "");
    
        cout<<path1;
        
        for(int i=0;i<path1.size();i++) {
            if(path1[i] == 'I') {
                return cloned;
            }
            else if(path1[i] == 'L') {
                cloned = cloned->left;
            }
            else if(path1[i] == 'R') {
                cloned = cloned->right;
            }
        }
        
        return cloned;
    }
};