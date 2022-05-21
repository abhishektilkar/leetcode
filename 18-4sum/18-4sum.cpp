class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        
        sort(nums.begin(),nums.end());
        
        vector<vector<int>> ansresult;
        
        for(int i=0;i<n;i++) {
            
            for(int j=i+1;j<n;j++) {
                
                int target_new = target - nums[i] - nums[j];
                
                int low = j+1;
                
                int high = n-1;
                
                while(low < high) {
                    
                    if(nums[low] + nums[high] == target_new) {
                        
                        vector<int> quadrantval;
                        
                        quadrantval.push_back(nums[i]);
                        quadrantval.push_back(nums[j]);
                        quadrantval.push_back(nums[low]);
                        quadrantval.push_back(nums[high]);
                                                
                        ansresult.push_back(quadrantval);
                        
                        while(low < high and nums[low] == quadrantval[2]) {
                    
                            low++;

                        }

                        while(low < high and nums[high] == quadrantval[3]) {

                            high--;

                        }
                        
                    }
                    
                    else if(nums[low] + nums[high] > target_new) {
                        
                        high--;
                        
                    }
                    
                    else {
                        
                        low++;
                        
                    }
                    
                }
                
                while(j+1 < n and nums[j] == nums[j+1]) {
                    
                    j++;
                    
                }
                
            }
            
            while(i+1 < n and nums[i] == nums[i+1]) {
                    
                i++;
                    
            }
            
        }
        
        return ansresult;
        
    }

};