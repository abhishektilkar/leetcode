class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        
        int n = cost.size();
        vector<int> v(n,0);
        
        
        for(int i=n-1;i>=0;i--) {
            if(i == n-1 || i == n-2) {
                v[i] = cost[i];
                continue;
            }
            v[i] = cost[i] + min(v[i+1],v[i+2]);
        }
        
        return min(v[0],v[1]);
    }
};