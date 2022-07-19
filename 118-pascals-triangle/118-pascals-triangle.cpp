class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        
        vector<vector<int>> v;
        

        v.push_back({1});
        if(numRows == 1) {
            return v;
        }
        v.push_back({1,1});
        

        
        
        for(int i=2;i<numRows;i++) {
            vector<int> v1(i+1);
            for(int j=0;j<=i;j++) {
                // v1.push_back(i) //|||
                if(j == 0 || j == i) {
                    v1[j] = 1;
                }
                else {
                    v1[j] = v[i-1][j] + v[i-1][j-1];
                }
            }
            v.push_back(v1);
        }
        
        return v;
    }
};