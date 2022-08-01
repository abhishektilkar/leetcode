class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        
        int last = 0;
        int n = nums.size();
        int count=0;
        
        for(int i=0;i<n-2;i++) {
            
            if(nums[i+1]-nums[i] == nums[i+2]-nums[i+1]) {
                count++;
                last = 1;

                int dif=nums[i+1]-nums[i];
                int j = i+3;
                while(j < n && nums[j]-nums[j-1] == dif) {
                    
                    last++;

                    count += last;
                    
                    j++;
                    
                }
                i=j-1;
                
                i--;
                
                
                
            }
        }
        // count << count;
        return count;
        
        
    }
















};