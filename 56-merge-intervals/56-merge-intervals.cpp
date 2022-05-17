class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        
        vector<vector<int>> ansresult;
        int start = intervals[0][0];
        int end = intervals[0][1];
        int n = intervals.size();
        
        for(int i=1;i<n;i++) {
            if(end >= intervals[i][0]) {
                end = max(end,intervals[i][1]);
            }
            else {
                ansresult.push_back({start, end});
                
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        
        ansresult.push_back({start, end});
        return ansresult;
    }
};