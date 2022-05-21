class Solution {

public:
    
    int minSwaps(string s) {
        
        int n = s.size();
        
        int count = 0;
        
        for(int i=0;i<n;i++) {
            
            if(s[i] == '[') {
                
                count++;
                
            }
            
            else if(count and s[i] == ']') {
                
                count--;
                
            }
            
        }
        
        return (count+1)/2;
        
    }
    
    
    
    
    
    
    
    
};