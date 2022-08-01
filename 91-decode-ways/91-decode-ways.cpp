class Solution {
public:
    int numDecodings(string s) {
        
        int n = s.size();
        string s1;
        int l2=1,l1=0,l0=0;
        if(s[n-1] != '0') l1=1;
        
        
        for(int i=n-2;i>=0;i--) {
            
            if(s[i] != '0') {
                l0 = l1;

                s1 = s.substr(i,2);
                int a = stoi(s1);
                
                if(a < 27) {
                    l0 += l2;

                }
            }
            else l0=0;
            
            
        
            
            l2 = l1;
            l1 = l0;

        }
        return l1;
        
    }


};