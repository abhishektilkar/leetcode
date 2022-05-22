class Solution {
    
public:

    string longestPalindrome(string s) {
        
        int n = s.size();
        
        int length = 1;
        
        string str = s.substr(0,1);
        
        int a;
        
        int b;
        
        int curlength = 0;
        
        for(int i=0;i<n;i++) {
            
            curlength = 1;
            
            a = i-1;
            
            b = i+1;
            
            while(a >= 0 and b < n and s[a] == s[b]) {
                
                curlength += 2;
                
                if(length < curlength) {
                    
                    length = curlength;
                    
                    str = s.substr(a,length);
                    
                }
                
                a--;
                
                b++;
                
            }
            
            if(i+1 < n and s[i] == s[i+1]) {
                
                curlength = 0;
                
                a = i;
                
                b = i+1;
                
                while(a >= 0 and b < n and s[a] == s[b]) {
                
                    curlength += 2;

                    if(length < curlength) {

                        length = curlength;

                        str = s.substr(a,length);

                    }

                    a--;

                    b++;

                }
                
            }
            
        }
        
        return str;
        
    }
    
};