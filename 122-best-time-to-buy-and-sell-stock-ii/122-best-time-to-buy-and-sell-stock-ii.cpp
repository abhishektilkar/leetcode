class Solution {
public:
    int maxProfit(vector<int>& numsprices) {
        
        int m = 2;
        int n = numsprices.size();
        
        int v1 = 0;
        int v0 = numsprices[n-1];
        int v1l=0,v0l=0;
        
        for(int i=n-2;i>=0;i--) {
            
            v1l = max(v0-numsprices[i],v1);
            v0l = max(numsprices[i]+v1,v0);
            v1 = v1l;
            v0 = v0l;
            
        }
        
        return v1l;
        
    }
};