class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        
        

        int n = nums.size();
        
        if(n < 3) return 0;
        int count=0,prev=0;
        int dit;
        int prev_dit = nums[1]-nums[0];
        
        for(int i=2;i<n;i++) {
            
            dit = nums[i]-nums[i-1];
            
            
            if(dit == prev_dit) {

                prev++;
            }
            else {
                prev_dit = dit;
                prev = 0;
            }
            
            count += prev;
            
        }
        return count;
        
    }






















};