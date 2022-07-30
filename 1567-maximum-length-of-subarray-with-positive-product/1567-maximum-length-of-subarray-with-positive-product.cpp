class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        
        int n = nums.size();
        int val=0;

        for(int i=0;i<n;i++) {
            
            if(nums[i] != 0) {
                int l=i,c=0,ai=-1,az=0;
                int h=i;
                //int j=i;
                while(i < n && nums[i] != 0) {

                    h=i;

                    if(nums[i] < 0) {

                        c++;
                        if(ai == -1) ai = i;
                        az = i;


                    }
                    i++;



                }


                if(c%2 == 0) val = max(val, h-l+1);

                else {
                    val = max(val,az-l);
                    val = max(val,h-ai);

                }
            }  
                
        }
        
        return val;
        
    }









};