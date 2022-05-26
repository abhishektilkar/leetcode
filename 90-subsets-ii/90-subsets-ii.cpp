class Solution {
public:
    vector<vector<int>> value;
    void subset(vector<int>& nums,int i,vector<int> v,int p) {
        int N = nums.size();
        if(N == i) {
            value.push_back(v);
            return;
        }
        int vn = v.size();
        subset(nums,i+1,v,-1);
        if(p == -1 and nums[i-1] == nums[i]) {
            return;
        }
        
        v.push_back(nums[i]);
        subset(nums,i+1,v,1);
        v.pop_back();
        
    }
                    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> v;
        subset(nums,0,v,1);
        return value;
    }
};