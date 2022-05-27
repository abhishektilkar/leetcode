class Solution {
public:
    vector<vector<int>> value;
    
    void permute1(vector<int>& nums,int i,vector<int> v) {
        int n = nums.size();
        if(i == n) {
            value.push_back(v);
            return;
        }
        for(int q=0;q<n;q++) {
            if(v[q] == -11) {
                v[q] = nums[i];
                permute1(nums,i+1,v);
                v[q] = -11;
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n,-11);
        permute1(nums,0,v);
        return value;
    }
};