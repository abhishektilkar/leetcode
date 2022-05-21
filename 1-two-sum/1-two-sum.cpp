class Solution {

public:
    
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        unordered_map<int,int> maperval;
        
        for(int i=0;i<n;i++) {
            
            if(maperval.count(target - nums[i])) {

                return {maperval[target - nums[i]],i};
            
            }
            
            else {
                
                maperval[nums[i]] = i;
                
            }
            
        }
        
        return {};
        
    }
    
    
    
    
    
    
    
    
};