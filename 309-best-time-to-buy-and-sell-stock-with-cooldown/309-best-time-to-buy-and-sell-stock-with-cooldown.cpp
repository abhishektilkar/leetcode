class Solution {
public:
    int maxProfit(vector<int>& numsprices) {
        
        
        
        int n = numsprices.size();
        int v21 = 0,v20 = 0, v11 = 0,v10 = numsprices[n-1];
        int v01=0;
        int v00=0;
        for(int i=n-2;i>=0;i--) {
            
            
            v01 = max(v10-numsprices[i],v11);
            v00 = max(v21+numsprices[i],v10);
            v21 = v11;
            
            v20 = v10;
            v11 = v01;
        
            v10 = v00;

        }

        return v01;
    }
};