class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        
        int l = 0;
        int h = n-1;
        int a,b;
        
        while(l <= h) {
            int m = l + (h-l)/2;
            a = m;
            b = m;
            if(m >= 1 and nums[m-1] == nums[m]) {
                a = m-1;
            }
            if(m+1 < n and nums[m] == nums[m+1]) {
                b = m+1;
            }
            
            if(a == b) {
                return nums[a];
            }
            if((h - b)%2 == 0) {
                h = a-1;
            }
            else{
                l = b+1;
            }
        }
        
        
        return a;
        
    }
    
};