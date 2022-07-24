class Solution {
public:
    int rob(vector<int>& nums) {
        
        int previ_1 = nums[0];
        int previ_2 = 0,q;
        int n = nums.size();

        
        for(int i=1;i<n;i++) {
            

            q = max(nums[i]+previ_2, previ_1);
            previ_2 = previ_1;
            previ_1 = q;
            

        }
        return previ_1;
    }
};