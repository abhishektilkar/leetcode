class Solution {
public:
    vector<vector<int>> v;
    
    int minimumTotalhelper(vector<vector<int>>& triangle,int i,int j) {
        if(v[i][j] != -1) {
            return v[i][j];
        }
        
        if(i == triangle.size()-1) {
            return v[i][j] = triangle[i][j];
        }
        
        int valuej = minimumTotalhelper(triangle,i+1,j);
        int valuej1 = minimumTotalhelper(triangle,i+1,j+1);
        
        return v[i][j] = (min(valuej,valuej1) + triangle[i][j]);
        
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n = triangle.size();
        
        v.resize(n,vector<int> (n,-1));
        return minimumTotalhelper(triangle,0,0);
        
    }







};