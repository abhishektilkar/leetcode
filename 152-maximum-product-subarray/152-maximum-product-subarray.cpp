class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long v1 = 2147493647;
        long long v2 = -2147493647;
        long long smax=v2,cmax=v2,cmin=v1,smin=v1,t;
        
        for(int i1: nums) {
            long long i = i1;

            
            
            
            
            
            
            if(i < 0) {
                t = cmin;
                cmin = cmax;
                cmax = t;

            }
            cmin = min(cmin*i,i);
            cmax = max(cmax*i,i);
            smax = max(smax,cmax);

        }
        
        return smax;

        
        
        
        
        
        
        
        
        
        
        
        
        
    }











};