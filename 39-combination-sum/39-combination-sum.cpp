class Solution {
public:
    
    vector<vector<int>> value;
    
    void subset(vector<int>& candidates,vector<int> v,int csum,int p) {
        if(csum < 0) {
            return;
        }
        else if(csum == 0) {
            value.push_back(v);
            return;
        }
        int n = candidates.size();
        for(int i=0;i<n;i++) {
            if(p <= i) {
                v.push_back(candidates[i]);
                subset(candidates,v,csum-candidates[i],i);
                v.pop_back();
            }
        }
        
    } 
    
    
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        int csum = target;
        vector<int> v;
        subset(candidates,v,csum,0);
        return value;
    }
    
    
};