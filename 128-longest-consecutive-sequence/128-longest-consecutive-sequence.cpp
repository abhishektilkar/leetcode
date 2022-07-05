class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> map;
        int count = 0;
        int val = 0;
        
        for(int i : nums) {
            map[i]++;
        }
        
        for(int i : nums) {
            count = 1;
            int q = i;
            map.erase(q);
            
            while(map[++q] > 0) {
                map.erase(q);
                count++;
            }
            q = i;
            while(map[--q] > 0) {
                map.erase(q);
                count++;
            }
            
            val = max(count, val);
            
        }
        return val;

    
    
    
    }
};