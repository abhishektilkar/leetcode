class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        
        int sum = 0;
        
        vector<int> left(n);
        vector<int> right(n);
        
        int h = 0;
        
        for(int i=0;i<n;i++) {
            h = max(height[i],h);
            left[i] = h;
        }
        
        h=0;
        
        for(int i=n-1;i>=0;i--) {
            h = max(height[i],h);
            right[i] = h;
        }
        
        for(int i=1;i<n-1;i++) {
            sum += max(0,(min(left[i-1],right[i+1]) - height[i]));
        }
        
        return sum;
    
    }
    
    
    
};