class Solution {
public:
    unordered_map<char,unordered_set<char>> map;
    
    bool value(char a,char charing) {
        if(charing == a) {
            return 1;
        }
        if(map.find(charing) != map.end()) {
            if(map[charing].count(a)) {
                return 1;
            }
        }
        
        return 0;
        
    }
    
    bool matchReplacement(string s, string sub, vector<vector<char>>& mappings) {
        
        
        
        for(int i=0;i<mappings.size();i++) {
            map[mappings[i][0]].insert(mappings[i][1]);
        }
        
        bool val = 0;
        
        for(int i=0;i<s.size();i++) {
            
            if(value(s[i], sub[0])) {
                
                int p=i,j=0;
                
                while(p < s.size() and j < sub.size()) {
                    
                    if(value(s[p], sub[j])) {
                        p++;
                        j++;
                        continue;
                    }
                    break;
                }
                if(j == sub.size()) {
                    return 1;
                }
            }
        }
        return 0;
    }





};