class Solution {
    
public:
    
    int countSubstrings(string s) {
        
        int n = s.size();
        
        int count = n;
        
        int a;
        
        int b;
        
        for(int i=0;i<n;i++) {
            
            a = i-1;
            
            b = i+1;
            
            while(a >= 0 and b < n and s[a] == s[b]) {
                
                count++;
                
                a--;
                
                b++;
                
            }
            
            if(i+1 < n and s[i] == s[i+1]) {
                
                a = i;
                
                b = i+1;
                
                while(a >= 0 and b < n and s[a] == s[b]) {
                
                    count++;

                    a--;

                    b++;

                }
                
            }
            
        }
        
        return count;
        
    }
    
};