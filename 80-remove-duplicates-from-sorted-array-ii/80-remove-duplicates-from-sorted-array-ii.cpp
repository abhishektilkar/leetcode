class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        int i=1,j=2;
        
        if(n <= 2) {
            return n;
            
        }
        
        int temp;
        
        // for(i=2,j=2;i < n && j < n) //
        while(i < n && j < n) {
            
            
            if(nums[i] == nums[j] && nums[i-1] == nums[j]) {
                j++;

            }
            else if(nums[i] != nums[j] || nums[i-1] != nums[j]) {
                temp = nums[i+1];
                nums[i+1] = nums[j];
                nums[j] = temp;
                
                i++;
                j++;
                
            }
            
        }
        
        
        return i+1;
        
    }

















};