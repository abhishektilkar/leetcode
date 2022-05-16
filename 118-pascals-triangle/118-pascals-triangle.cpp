class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ansresult;
        
        ansresult.push_back({1});
        
        if(numRows == 1){
            return ansresult;
        }
        
        ansresult.push_back({1,1});
        
        if(numRows == 2){
            return ansresult;
        }
        
        for(int i=2;i<numRows;i++) {
            
            vector<int> v(i+1);
            v[0] = 1;
            v[i] = 1;
            
            for(int j=1;j<i;j++) {
                v[j] = ansresult[i-1][j-1] + ansresult[i-1][j];
            }
            
            ansresult.push_back(v);
        }
        
        return ansresult;
        
    }
};