class Solution {
public:
    int val;
    void value(vector<int>& c, int i,vector<int>& b) {

        
        int n = c.size();
        if(i == n) {
            int max1 = INT_MIN;
            for(int p : b) {
                max1 = max(max1,p);
            }
            val = min(val,max1);
            return;
        }
        
        
        for(int j=0;j<b.size();j++) {
            b[j] += c[i];
            value(c,i+1,b);
            b[j] -= c[i];
        }
        
    }
    
    int distributeCookies(vector<int>& c, int q) {


        val = INT_MAX;
        int n = c.size();
        vector<int> b(q,0);
        value(c,0,b);
        return val;
        
    }
};