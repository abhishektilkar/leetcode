class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        

        int n = nums.size();
        vector<int> v(n,0);
        for(int i=n-1;i>=0;i--) {
            

            if(i == n-1) {v[i] = 1; continue;}

            for(int j=1;j<=nums[i] && i+j < n;j++) {
                if(v[i+j] == 1) {
                    v[i] = 1;
                    break;
                }
            }
        }
        

        return v[0];
    }
};