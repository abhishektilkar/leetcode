class Solution {
public:
    int val = 0;
    int cols1;
    int maximumRows(vector<vector<int>>& mat, int cols) {
        
        
        int m = mat[0].size();
        
        
        vector<int> visited(m,0);
        cols1 = cols;
        value(0,0,visited,mat);
        
        return val;
        
        
    }
    
    void value(int j,int curcol,vector<int> &visited, vector<vector<int>> &mat) {
        int l=0;
        int count = 0;
        if(j == mat[0].size()) {
            int n = mat.size();
            for(int i=0;i<n;i++) {
                int m = mat[0].size();
                for(l=0;l<m;l++) {
                    
                    if(mat[i][l] == 1 && visited[l] == 0) {
                        break;
                    }
                }
                if(l == mat[0].size()) count++;
            }
            val = max(count, val);
            // count//;
            
            return;
        }
        
        if(curcol < cols1) {
            visited[j] = 1;
            value(j+1,curcol+1,visited,mat);
            visited[j] = 0;
            
        }
        value(j+1,curcol,visited,mat);
        
        
    }





};