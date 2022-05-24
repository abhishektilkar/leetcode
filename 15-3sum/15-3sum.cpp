class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ansresult;
        int target = 0;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++) {
            target = 0-nums[i];
            
            int l = i+1,h=n-1;
            
            while(l < h) {
                if(nums[l] +nums[h] == target){
                    // code here //
                    vector<int> v = {nums[i],nums[l],nums[h]};
                    ansresult.push_back(v);
                    
                    while(l < h and nums[l] == v[1]) l++;
                    while(l < h and nums[h] == v[2]) h--;
                }
                else if(nums[l]+nums[h] > target) {
                    h--;
                }
                else {
                    l++;
                }
            }
            
            while(i+1 < n and nums[i] == nums[i+1]) i++;
            
        }
        
        return ansresult;
    
    }
    
};