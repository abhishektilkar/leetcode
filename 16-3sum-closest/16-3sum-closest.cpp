class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum = 0;
        
        
        
        sort(nums.begin(),nums.end());
        
        
        
        
        
        
        int n = nums.size();
        
        
        int val = 1e9;
        
        
        
        for(int i=0;i<n-2;i++) {
            
            int l = i+1;
            int h = n-1;
            
            while(l < h && i != h) {
                if(abs(nums[l]+nums[h]+nums[i]-target) < val) {
                    val = abs(nums[l]+nums[h]+nums[i]-target);
                    
                    sum = nums[l]+nums[h]+nums[i];
                }
                if(nums[l]+nums[h]+nums[i] > target) h--;
                else if(nums[l]+nums[h]+nums[i] < target) l++;
                else {return nums[l]+nums[h]+nums[i];}
                

            }
            
        }
        return sum;
        
        
    }











};