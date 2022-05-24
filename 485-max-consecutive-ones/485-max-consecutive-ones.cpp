class Solution {
    
public:

    int findMaxConsecutiveOnes(vector<int>& nums) {
    
        int n = nums.size();
        
        int maxcount = 0;
        
        int currentcount = 0;
        
        for(int i=0;i<n;i++) {
        
            if(nums[i] == 0) {
            
                maxcount = max(currentcount,maxcount);
                
                currentcount = -1;
            
            }
            
            currentcount++;
        
        }
        
        maxcount = max(currentcount,maxcount);
        
        return maxcount;
    
    }
    
    
    
    
};