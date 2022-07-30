class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int aisminval = prices[0];
        int aismaxval = 0;
        
        
        
        
        
        int n = prices.size();
        
        
        for(int i=1;i<n;i++) {
            
            
            aismaxval = max(aismaxval,prices[i]-aisminval);
        
            aisminval = min(prices[i],aisminval);

        }
        
        return aismaxval;
        
    }
};