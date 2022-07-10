 // * Definition for a binary tree node.
 // * struct TreeNode {
 // *     int val;
 // *     TreeNode *left;
 // *     TreeNode *right;
 // *     TreeNode() : val(0)
// , left(nullptr), right(nullptr) {}/////////////////////////////////////////////////////////////
 // *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 // *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 // * };
class Solution {
public:
    vector<TreeNode*> util(int N,int li, int ei){
        vector<TreeNode*> v;
        // if(li > ei){
        //     // (NULL);
        //     return v;
        // }
        // if(N%2 == 0){
        //     return v;
        // }
        if(li == ei){
            TreeNode* q1 = new TreeNode(0);
            v.push_back(q1);
            return v;
        }
        if(li+1 == ei){
            return v;
        }
        for(int i=li+1;i < ei;i+=2){
            vector<TreeNode*> ltree = util(i-1,li,i-1);
            vector<TreeNode*> rtree = util(N-i,i+1,ei);
            
            for(auto l : ltree){
                for(auto r : rtree){
                    TreeNode* q1 = new TreeNode(0);
                    q1->left = l;
                    q1->right = r;
                    v.push_back(q1);
                }
            }
        }
        return v;
    }
    vector<TreeNode*> allPossibleFBT(int N){
        return util(N,1,N);
    }
};