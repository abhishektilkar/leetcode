class Solution {
public:
    bool rotateString(string s, string goal) {
        
        if(s.size() != goal.size()) {
            
            return 0;
            
        }
        
        s = s+s;
        
        int n = s.size();
        
        for(int i=0;i<n;i++) {
            
            int j=0;
            
            if(s[i] == goal[j]) {
                
                int a = i;
                
                while(j < goal.size() and goal[j] == s[a]) {
                    
                    a++;

                    j++;
                    
                }
                
                if(j == goal.size()) {
                    
                    return true;
                    
                }
                
            }
            
        }
        
        return 0;
        
    }
};