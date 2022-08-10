class Solution {
public:
    void countOnes(vector<vector<int>> &grid, int i, int j, int &c1, int &val) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        if(i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 1) {
            if(i == 0 || j == 0 || i == n-1 || j == m-1) val = 1;
            
            grid[i][j] = 2;
            c1++;
            countOnes(grid,i+1,j,c1,val);
            countOnes(grid,i,j+1,c1,val);
            countOnes(grid,i-1,j,c1,val);
            countOnes(grid,i,j-1,c1,val);
            
            
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                
                if(grid[i][j] == 1) {
                    int val = 0,c1=0;
                    
                    countOnes(grid,i,j,c1,val);
                    
                    // count //
                    cout << c1 << " " << endl;
                    cout << val << " ";

                    if(val == 0) {
                        count += c1;
                        
                    }
                }
            }
        }
        return count;
        
    }







};