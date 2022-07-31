class Solution {
public:
    int maxProfit(vector<int>& numsprices) {
        
        int m = 2;
        int n = numsprices.size();
        
        vector<vector<int>> v(n,vector<int> (m,0));
        v[n-1][1] = 0;
        v[n-1][0] = numsprices[n-1];
        
        for(int i=n-2;i>=0;i--) {
            
            v[i][1] = max(v[i+1][0]-numsprices[i], v[i+1][1]);
            v[i][0] = max(numsprices[i]+v[i+1][1], v[i+1][0]);
            
        }
        
        return v[0][1];
        
    }
};