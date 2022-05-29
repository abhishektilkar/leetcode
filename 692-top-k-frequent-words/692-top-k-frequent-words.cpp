class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int q) {
        
        int n = words.size();
        unordered_map<string, int> map1;
        for(int i=0;i<n;i++) {
            map1[words[i]]++;
        }
        
        vector<vector<string>> v(n+1);
        
        for(auto [x,y] : map1) {
            v[y].push_back(x);
        }
        
        vector<string> value;
        for(int i=n;i>=0;i--) {
            
            if(v[i].size() <= 0)
                continue;

            sort(v[i].begin(),v[i].end());
            
            if(v[i].size() <= q){
                q = q - v[i].size();
                value.insert(value.end(), v[i].begin(), v[i].end());
            }
            else{
                value.insert(value.end(),v[i].begin(),v[i].begin()+q);
                q = 0;
            }
            
            if(q <= 0) {
                break;
            }
            
        }
        
        return value;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};