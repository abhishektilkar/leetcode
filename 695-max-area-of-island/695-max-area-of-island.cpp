class Solution {
public:
    
    int v = 0;

    void helperFunTo(vector<vector<int>>& grid,int i,int j,int &val) {
        
        
        
        int n = grid.size();
        int m = grid[0].size();

        
        
        if(i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 1) {
            val++;
            
            grid[i][j] = 0;
            
            helperFunTo(grid,i+1,j,val);
            helperFunTo(grid,i,j+1,val);
            helperFunTo(grid,i-1,j,val);
            helperFunTo(grid,i,j-1,val);
            
            
            
            
            
            
            
        }
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                
                
                if(grid[i][j] == 1) {
                    int val = 0;


                    
                    helperFunTo(grid,i,j,val);
                    
                    // cout << val << " "; //

                    v = max(val,v);
                
                }
                
            }
        }
        return v;

    }

    
    
    
    
    
    
    
    
    
    
    




    



};