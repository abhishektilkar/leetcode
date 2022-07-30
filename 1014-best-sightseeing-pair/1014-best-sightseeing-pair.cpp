class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& nums) {
        
        int n = nums.size();
        
        int h = max(nums[n-2],nums[n-1]-1);
        int val = nums[n-2]+nums[n-1]-1;
        
        
        for(int i=n-3;i>=0;i--) {
            
            
            val = max(val, nums[i]+h-1);

        
            h = max(h-1,nums[i]);
        
        }
        
        return val;
        
        
        
    }










};