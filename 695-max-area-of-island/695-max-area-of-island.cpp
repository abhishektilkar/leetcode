class Solution {
public:
    int area1 = 0;
    
    void area(vector<vector<int>>& grid, int &areai, int i, int j) {
        int n = grid.size();
        int m = grid[0].size();
        
        if(i < n && j < m && i >= 0 && j >= 0 && grid[i][j] == 1) {
            grid[i][j] = 2;
            areai++;
            area1 = max(area1,areai);
            
            area(grid, areai, i+1, j);
            area(grid, areai, i, j+1);
            area(grid, areai, i-1, j);
            area(grid, areai, i, j-1);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 1) {
                    int areai = 0;
                    area(grid,areai,i,j);
                }
            }
        }
        
        return area1;
    }
};