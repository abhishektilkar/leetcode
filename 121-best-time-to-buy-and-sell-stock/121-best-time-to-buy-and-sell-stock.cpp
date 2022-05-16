class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = INT_MIN;
        int minval = prices[0];
        int N = prices.size();
        for(int i=1;i<N;i++) {
            maxpro = max(prices[i]-minval,maxpro);
            minval = min(prices[i],minval);
        }
        if(maxpro <= 0) {
            return 0;
        }
        return maxpro;
    }
};