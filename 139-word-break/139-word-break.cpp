class Solution {
public:
    vector<int> v;
    
    bool isThereTo(string s,int i, unordered_map<string,int> map) {
        
        
        
        
        
        
        
        int n = s.size();
        
        if(i >= n) return 1;
        
        
        if(v[i] != -1) {
        
            return (bool)(v[i]);
        
        }
        
        string string1 = s.substr(i,301);

        
        
        
        for(int j=0;j<n;j++) {
            
            string a = string1.substr(0,j+1);
            
            if(map[a] > 0 && isThereTo(s,i+j+1,map)) return v[i] = 1;

            
        }
        
        return v[i] = 0;
        
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        
        
        
        
        
        
        int n = s.size();
        v.resize(n,-1);
        
        unordered_map<string,int> map;
        for(string a : wordDict) map[a]++;
        
        
        return isThereTo(s,0,map);
        
        
        
    }
















};