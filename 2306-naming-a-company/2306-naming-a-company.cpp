class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        
        unordered_set<string> set[26];
        
        for(auto s : ideas) {
            set[s[0]-'a'].insert(s.substr(1));
        }
        
        long long value = 0;
        
        for(int i=0;i<26;i++) {
            for(int j=i+1;j<26;j++) {
                long long c1 = 0L;
                long long c2 = 0L;
                
                for(auto c : set[i]) {
                    if(!set[j].count(c)) c1++;
                }
                
                for(auto c : set[j]) {
                    if(!set[i].count(c)) c2++;
                }
                
                value += c1*c2;
            
            }
        }
        
        return value*2;
        
    }


};