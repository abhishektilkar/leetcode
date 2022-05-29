class Solution {
public:
    int findPairs(vector<int>& nums, int q) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i=0;
        int j=1;
        int count = 0;
        while(i < n and j < n) {
            while(i >= j) {
                j++;
            }
            if(i >= n or j >= n) {
                return count;
            }
            if(nums[j] - nums[i] == q) {
                count++;
                
                while(i+1 < n and nums[i] == nums[i+1]){
                    i++;
                }
                i++;
                while(j+1 < n and nums[j] == nums[j+1]){
                    j++;
                }
                j++;
            }
            else if(nums[j]-nums[i] > q) {
                i++;
            }
            else {
                j++;
            }
        }
        return count;
    }



















};