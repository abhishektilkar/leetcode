typedef pair<int,pair<int,int>> ppi;

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int q) {
        
        priority_queue<ppi, vector<ppi>, greater<ppi>> pq;
        vector<vector<int>> v;
        
        pq.push({nums1[0]+nums2[0], {0,0}});
        map<pair<int,int>,int> map1;
        // vector<pair<int,int>> v;
        // q = min(q);
        while(v.size() < q and !pq.empty()) {
            ppi t = pq.top();
            pq.pop();
            
            int x = t.second.first;
            int y = t.second.second;
            
            v.push_back({nums1[x], nums2[y]});
            
            if(x+1 < nums1.size() and map1[{x+1,y}]++ < 1)
                pq.push({nums1[x+1]+nums2[y], {x+1,y}});
            
            if(y+1 < nums2.size() and map1[{x,y+1}]++ < 1)
                pq.push({nums1[x]+nums2[y+1], {x,y+1}});

        }
        
        return v;
    }



};