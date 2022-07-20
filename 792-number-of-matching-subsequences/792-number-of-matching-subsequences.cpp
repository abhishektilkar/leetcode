class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        
        
        unordered_map<char,vector<int>> map;
        int count = 0;
        
        
        for(int i=0;i<s.size();i++) {
            map[s[i]].push_back(i);
        }
        
        for(string word : words) {
            int lo = -1;
            
            for(int j=0;j<word.size();j++) {
                auto it = upper_bound(map[word[j]].begin(), map[word[j]].end(), lo);
                
                if(it == map[word[j]].end()) break;
                
                lo = *it;
                
                if(j == word.size()-1) count++;
            }
            
        }
        
        return count;
        
        
    }



};