class Solution {
public:
    bool allocate(vector<int>& nums, int n, int mid,int m) {
        int s = 1;
        int sum = 0;
        
        for(int i=0;i<n;i++) {
            if(nums[i] > mid) {
                return 0;
            }
            
            sum += nums[i];
            if(sum > mid) {
                s++;
                sum = nums[i];
            }
        }
        
        if(s > m) {
            return 0;
            
        }
        return 1;
    
    }
    
    int splitArray(vector<int>& nums, int m) {
        int n = nums.size();
        
        
        int low = nums[0];
        int high = nums[0];
        
        for(int i=1;i<n;i++) {
            low = max(low,nums[i]);
            high += nums[i];
        }
        int value;
        while(low <= high) {
            
            int mid = low + (high-low)/2;
            
            if(allocate(nums,n,mid,m)) {
                value = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        
        return value;
    }
    
    
};