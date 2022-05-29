class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int q) {
        unordered_map<int,int> v;
        
        int n = nums.size();
        vector<int> v1;
        for(int i=0;i<n;i++) {
            v[nums[i]]++;
        }
        
        vector<vector<int>> a(n+1);
        
        for(auto [x,y] : v) {
            a[y].push_back(x);
        }
        
        for(int i=n;i>=0;i--) {
            v1.insert(v1.end(), a[i].begin(), a[i].end());
            if(v1.size() >= q) {
                return v1;
            }
        }
        
        return v1;
        
        
        
        return v1;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};