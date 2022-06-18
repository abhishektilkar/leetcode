class WordFilter {
public:
    
    unordered_map<string ,int> map;
    
    WordFilter(vector<string>& words) {
        
        int index = -1;
        for(string word : words) {
            index++;
            
            for(int i=0;i<word.size();i++) {
                
                for(int j=0;j<word.size();j++) {
                    string toput = word.substr(0,i+1) + "#" + word.substr(j);
                    map[toput] = index;
                }
                
            }
            
        }
        
    }
    
    int f(string prefix, string suffix) {
        
        string toput = prefix + "#" + suffix;
        
        if(map.find(toput) != map.end()) {
            return map[toput];
        }
        return -1;
    }
















};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */