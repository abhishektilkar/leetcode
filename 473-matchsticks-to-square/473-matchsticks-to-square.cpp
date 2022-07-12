
class Solution {
public:
    bool val;
    int sum = 0;
    void value(vector<int>& matchsticks,int l,int s1,int s2,int s3,int s4) {
        if(val) {
            return;
        }
        int n = matchsticks.size();
        if(l >= n) {
            if(s1 == s2 && s3 == s4 && s4 == s1) {
                val = true;
            }
            return;
        }
        if(sum < s1 || sum < s2 || sum < s3 || sum < s4) {
            return;
        }
        int v = matchsticks[l];
        value(matchsticks, l+1, s1+v, s2, s3, s4);
        if(val) {
            return;
        }
        value(matchsticks, l+1, s1, s2+v, s3, s4);
        if(val) {
            return;
        }
        value(matchsticks, l+1, s1, s2, s3+v, s4);
        if(val) {
            return;
        }
        value(matchsticks, l+1, s1, s2, s3, s4+v);
    }
    bool makesquare(vector<int>& matchsticks) {
        
        

        
        
        

        
        sort(matchsticks.begin(),matchsticks.end());
        reverse(matchsticks.begin(),matchsticks.end());
        sum = 0;
        for(int i : matchsticks) {
            sum += i;
        }
        if(sum % 4 != 0) {
            return 0;
        }
        sum /= 4;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        val = 0;
        
        
        
        value(matchsticks, 0, 0, 0, 0, 0);
        
        
        return (bool)(val);
    }
};