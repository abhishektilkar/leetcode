class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int q) {
        
        int n = points.size();
        priority_queue<pair<long long,int>> pq;
        
        for(int i=0;i<n;i++) {
            
            long long x = points[i][0];
            long long y = points[i][1];
            pq.push({x*x + y*y , i});
            if(i >= q) {
                pq.pop();
            }
        }
        vector<vector<int>> v;
        
        for(int i=0;i<q;i++) {
            auto t = pq.top();
            pq.pop();
            v.push_back(points[t.second]);
        }
        
        return v;
    }





























};