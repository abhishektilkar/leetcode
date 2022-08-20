class Solution {
public:
    string convert(string s, int numsRows) {
        
        
        unordered_map<int,string> map;
        int m = s.size();
        int i;
        int j=0;
        
        string val = "";
        while(j < m) {
            
            
            for(i=0;i<numsRows && j < m ;i++) {
                map[i] = map[i]+s[j];
                
                j++;

            }
            
            for(i = numsRows-2;i>0 && j<m; i--) {
                map[i] = map[i]+s[j];
                
                j++;
                
            }
        }
        
        for(int ai=0;ai<numsRows;ai++) {
            val += map[ai];
            
        }
        return val;
        
    }




};