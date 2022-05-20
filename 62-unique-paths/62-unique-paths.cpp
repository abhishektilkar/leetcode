class Solution {

public:
    
    int uniquePaths(int m, int n) {
        
        int t = n;
        
        n = m;
        
        m = t;

        vector<vector<int>> matrix(n, vector<int> (m,0));

        for(int i=n-1;i>=0;i--) {
            
            for(int j = m-1;j>=0;j--) {
                
                if(i == n-1 || j == m-1) {
                    
                    matrix[i][j] = 1;
                    
                }
                
                else {
                    
                    matrix[i][j] = matrix[i+1][j] + matrix[i][j+1];
                    
                }
                
            }
            
        }
        
        return matrix[0][0];
        
    }
};