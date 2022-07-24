class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        
        int n = cost.size();
        
        int x=cost[n-2],y=cost[n-1],z;
        
        
        for(int i=n-3;i>=0;i--) {
            z = y;
            y = x;
            x = cost[i] + min(y,z);
        }
        
        return min(x,y);
    }
};