class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        
        int n = nums.size();
        

        int cmax=0,cmin=0,smin=INT_MAX,smax=INT_MIN;
        
        
        
        
        
        
        
        

        
        
        
        
        int sum=0;
        
        
        
        for(int i=0;i<n;i++) {
            cmin = min(cmin+nums[i],nums[i]);
            cmax = max(cmax+nums[i], nums[i]);
            smax = max(smax,cmax);
            smin = min(smin,cmin);

            sum += nums[i];
        }
        if(smax < 0) 
            return smax;
        
        
        
        
        return max(sum-smin,smax);
    }




};