class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int n = cost.size();
        
        int x = cost[n-1];
        int y = cost[n-2];
        
        for(int i=n-3;i>=0;i--) {
            int z = cost[i]+min(x,y);
            x = y;
            y = z;
            
        }
        return min(x,y);
        
    }
};