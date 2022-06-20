class Solution {
public:
    
    int longestSubsequence(string s, int k) {
        
        int l=0;
        for(int i=0;i<s.size();i++) {
            if(s[i] == '0') {
                l++;
            }            
        }
        int val = 0;
        long long wt = 1;
        
        for(int i=s.size()-1;i>=0;i--) {
            if(s[i] == '1') {
                val += wt;
                
                if(val <= k) {
                    l++;
                }
                else{
                    break;
                }
            }
            
            if(wt <= k) {
                wt = wt*2;
            }
        }
        
        return l;
        
    }
};