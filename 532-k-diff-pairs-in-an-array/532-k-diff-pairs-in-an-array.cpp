class Solution {
public:
    int findPairs(vector<int>& nums, int q) {
        unordered_map<int,int> map;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            map[nums[i]]++;
        }
        int count = 0;
        for (auto p : map) {
          if ((!q && p.second > 1)
            || (q && map.count(p.first + q))) count++;
        }
        
        return count;
    }



















};