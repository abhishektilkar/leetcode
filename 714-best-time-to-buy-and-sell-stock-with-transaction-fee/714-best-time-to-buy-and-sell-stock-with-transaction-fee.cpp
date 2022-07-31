class Solution {
public:
    int maxProfit(vector<int>& numsprices, int fee) {
        
        int n = numsprices.size();
        
        int v10=numsprices[n-1],v11=0,v01=0,v00=0; // ||||||
        
        
        for(int i=n-2;i>=0;i--) {
            
            
            
            
            
            v01 = max(v10-fee-numsprices[i],v11);
            v00 = max(numsprices[i]+v11,v10);
            
        
            v10 = v00;
            v11 = v01;

        
        }
        // a //|||||
        return v01;

    
    }






};