class Solution {
public:
    vector<int> v;
    
    bool wordBreak(string s, vector<string>& wordDict) {
        
        
        
        
        
        
        int n = s.size();
        v.resize(n,0);
        
        unordered_map<string,int> map;
        for(string a : wordDict) map[a]++;
        
        
        for(int i=n-1;i>=0;i--) {
            for(int j=i;j<n;j++) {
                
                
                if(map[s.substr(i,j-i+1)] > 0 && (j >= n-1 || v[j+1] == 1)) {
                    v[i] = 1;
                    break;
                    
                }
            }
        }
        // ||||| cout << v[7] << " "; ///|||||
        
        return v[0];
        
        
        
    }



















};