class Solution {
public:
    void helperFunTo(vector<vector<int>>& grid,int i,int j,int &val) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        if(i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 0) {
            
            if(i == n-1 || i == 0 || j == 0 || j == m-1) val = 0;

            grid[i][j] = 2;
            
            helperFunTo(grid,i+1,j,val);
            helperFunTo(grid,i,j+1,val);
            helperFunTo(grid,i-1,j,val);
            helperFunTo(grid,i,j-1,val);
            
        }
    }
    
    int closedIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        int v = 0;

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                
                if(grid[i][j] == 0) {
                    int val = 1;
                    helperFunTo(grid,i,j,val);
                    
                    if(val == 1) v++;
                }
                
            }
        }
        
//         for(int i=0;i<n;i++) {
//             for(int j=0;j<m;j++) {
//                 cout << grid[i][j] << " ";
                
//             }
//             cout << endl;
            
//         }
        
        return v;

    }








    














};