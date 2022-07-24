class Solution {
public:
    int val(vector<vector<int>> &v, vector<int>& nums, int i, int l) {
        
        
        
        int n = nums.size();
        if(n <= i) {
            return 0;
        }
        if(v[i][l] != -1) {
            return v[i][l];
        }
        
        if(n-1 == i && l) {
            return v[i][l] = 0;
        }
        else if(i == n-1 && !l) {
            return v[i][l] = nums[i];
        }

        
        
        int ai = 0;
        if(l == 0) {
            ai = nums[i] + val(v,nums,i+1,1);
        }
        ai = max(ai,val(v,nums,i+1,0));
        

        
        
        return v[i][l] = ai;
    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        vector<vector<int>> v(n,vector<int> (2,-1));
        
        return val(v, nums, 0, 0);
        
    }
};