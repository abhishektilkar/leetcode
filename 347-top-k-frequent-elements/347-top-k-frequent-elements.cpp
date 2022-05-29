class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int q) {
        unordered_map<int,int> v;
        
        int n = nums.size();
        vector<int> v1(q);
        for(int i=0;i<n;i++) {
            v[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto [x,y] : v) {
            pq.push({y,x});
        }
        
        for(int i=0;i<q;i++) {
            v1[i] = pq.top().second;
            pq.pop();
        }
        
        return v1;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};