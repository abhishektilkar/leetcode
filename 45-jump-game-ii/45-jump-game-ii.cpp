class Solution {
public:
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        int l=0,h=0;
        int l1=0,hi=0;
        
        
        
        
        
        
        int count = 0;
        
        while(h < n-1) {
            count++;
            
            for(int i=l;i<=h;i++) {
                
                if(nums[l] != 0) {
                    l1 = h+1;
                }
                
                hi = max(hi,i+nums[i]);
                
            }
            l=l1;
            h=hi;

        
        }
        

        return count;
    }
};