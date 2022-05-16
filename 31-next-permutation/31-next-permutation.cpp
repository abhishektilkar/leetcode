class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int startindsx = 0;
        for(int i=n-1;i>=1;i--) {
            if(nums[i-1] < nums[i]) {
                startindsx = i;
                for(int j=n-1;j>=i;j--) {
                    if(nums[i-1] < nums[j]) {
                        swap(nums[i-1], nums[j]);
                        break;
                    }
                }
                break;
            }
        }
        reverse(nums.begin()+startindsx, nums.end());
    }
};