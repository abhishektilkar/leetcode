class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int cursum = 0;
        
        int maxsum = INT_MIN;

        int n = nums.size();

        for(int i=0;i<n;i++) {
        
            cursum = max(cursum+nums[i], nums[i]);
            
            maxsum = max(maxsum, cursum);
        
        }
        
        return maxsum;
    
    }

};