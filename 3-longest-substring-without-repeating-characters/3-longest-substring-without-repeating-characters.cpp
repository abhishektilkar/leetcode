class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        
        unordered_map<char,int> map;
        
        int maxlength = 0;
        
        int j = 0;
        
        int i=0;
        
        while(j < n) {
            
            map[s[j]]++;
            
            if(map[s[j]] == 2) {
                
                while(map[s[j]] == 2) {
                    
                    map[s[i]]--;
                    
                    i++;
                    
                }
                
            }
            
            maxlength = max(j-i+1,maxlength);

            j++;
            
        }
        
        return maxlength;
        
    }
    
};