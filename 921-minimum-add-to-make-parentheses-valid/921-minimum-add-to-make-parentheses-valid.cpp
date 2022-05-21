class Solution {
public:
    int minAddToMakeValid(string s) {
        
        int n = s.size();
        
        int ansresult = 0;
        
        int count = 0;
        
        for(int i=0;i<n;i++) {
            
            if(s[i] == '(') {
                
                count++;
                
            }
            
            else if(s[i] == ')') {
                
                count--;
                
                if(count < 0) {
                    
                    count = 0;
                    
                    ansresult++;
                    
                }
                
            }
            
        }
        
        ansresult += count;
        
        return ansresult;
        
    }
    
};