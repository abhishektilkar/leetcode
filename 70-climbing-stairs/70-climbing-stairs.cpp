class Solution {
public:
    int climbStairs(int n) {
        

        
        if(n <= 2) {
            return n;
        }
        int x=1,y=2,z;
        for(int i=2;i<n;i++) {
            z = x;
            x = y;
            y += z;
        }
        
        return y;

    }
};