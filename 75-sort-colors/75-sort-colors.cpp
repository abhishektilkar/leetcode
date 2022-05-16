class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        
        // for(int i) //
        
        int i=0;
        
        int j=n-1;
        
        int p=0;
        
        while(p <= j) {
            
            if(nums[p] == 0) {
                
                swap(nums[i],nums[p]);
                
                i++;
            
                p++;
            
            }
            
            else if(nums[p] == 1) {
            
                p++;
            
            }
            
            else if(nums[p] == 2) {
                
                swap(nums[p],nums[j]);

                j--;
            
            }
            
        }
        
    }
    
};