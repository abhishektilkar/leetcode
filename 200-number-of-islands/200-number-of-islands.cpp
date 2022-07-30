class Solution {
public:
    
    void helperFunTo(vector<vector<char>>& grid, int i,int j) {
        
        
        
        int n = grid.size();
        int m = grid[0].size();
        
        if(i >= 0 && i < n && j >=0 && j < m && grid[i][j] == '1') {
            grid[i][j] = '0';
            
        
            helperFunTo(grid,i+1,j);
            helperFunTo(grid,i,j+1);
            helperFunTo(grid,i-1,j);
            helperFunTo(grid,i,j-1);

        }
    }  
    
    
    
    
    
    int numIslands(vector<vector<char>>& grid) {
        
        
        
        
        
        
        
        
        
        
        
        
        
        int n = grid.size();
        int m = grid[0].size();
        
        
        
        int count = 0;

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                
                
                
                if(grid[i][j] == '1') {
                    
                    count++;

                    helperFunTo(grid,i,j);
                }
            }
        }
        
        
        return count;

        
    }









};