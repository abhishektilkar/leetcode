class Solution {

public:
    
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        
        int count = 0;
        
        count = 1;
        
        int maxcount = 0;
        
        unordered_map<int,int> map;
        
        for(int i=0;i<n;i++) {
        
            map[nums[i]]++;
        
        }
        
        for(int i=0;i<n;i++) {
            
            int numval = nums[i];
            
            count = 1;
            
            while(map.count(numval-1)) {
                
                count++;
                
                map.erase(numval-1);;
                
                numval--;
                
            }
            
            numval = nums[i];
            
            while(map.count(numval+1)) {
                
                count++;

                map.erase(numval+1);
                
                numval++;
                
            }
            
            maxcount = max(count,maxcount);
            
        }
        
        return maxcount;
        
    }
    
};