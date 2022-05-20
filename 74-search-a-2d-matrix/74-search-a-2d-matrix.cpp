class Solution {

public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int n = matrix.size();
        
        int m = matrix[0].size();
        
        int l = 0;
        
        int h = n*m-1;
        
        int mval = 0;
        
        while(l <= h) {
            
            mval = l + (h-l)/2;
            
            int i = mval/m;
            
            int j = mval%m;
            
            if(matrix[i][j] == target) {
                return true;
            }
            
            else if(matrix[i][j] > target) {
                h = mval-1;
            }
            
            else {
                l = mval+1;
            }
            
        }
        
        return 0;
        
    }
    
    
    
    
    
    
    
    
    
    
    
    

    
};