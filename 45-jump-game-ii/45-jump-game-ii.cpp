class Solution {
public:
    int jump(vector<int>& nums) {
        
        

        
        int n = nums.size();
        vector<int> v(n,0);
        
        for(int  i=n-1;i>=0;i--) {
            
            if(i == n-1) {v[i] = 0; continue;}
            


            
            // long //
            int val = INT_MAX;
            for(int j=1;j<=nums[i] && i+j < n;j++) {
                val = min(val, v[i+j]);
            }
            

            
            
            
            
            
            

            if(val != INT_MAX) v[i] = val+1;
            else v[i] = INT_MAX;
        }
        
        
        return v[0];
    }

















};