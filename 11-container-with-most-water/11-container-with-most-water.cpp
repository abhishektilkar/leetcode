class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int n = height.size();
        
        int l = 0,h = n-1;
        
        int curval = 0;
        
        int maxval = 0;
        
        while(l < h) {
        
            curval = min(height[l],height[h])*(h-l);
            
            maxval = max(curval,maxval);
            
            if(height[l] < height[h]) l++;
            
            else if(height[h] < height[l]) h--;
            
            else {
            
                l++;
                
                h--;
            
            }
        
        }
        
        return maxval;
        
    }
};