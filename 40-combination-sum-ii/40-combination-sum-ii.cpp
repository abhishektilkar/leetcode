class Solution {
public:
    vector<vector<int>> value;
    
    void subset(vector<int>& candidates,int csum,vector<int> v,int j,int p) {
        
        int n = candidates.size();
        
        if(csum == 0 and j == n) {
            value.push_back(v);
        }
        if(csum < 0 or j >= n) {
            return;
        }
        
        subset(candidates,csum,v,j+1,-1);
        
        if(p == -1 and candidates[j-1] == candidates[j]) {
            return;
        }
    
        v.push_back(candidates[j]);
        subset(candidates,csum-candidates[j],v,j+1,1);
        v.pop_back();
    
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int csum = target;
        vector<int> v;
        subset(candidates,csum,v,0,1);
        return value;
    }

};