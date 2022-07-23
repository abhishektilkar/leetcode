class Solution {
public:
    int tribonacci(int n) {
        if(n <= 1) {
            return n;
        }
        
        int x=1,y=1,z=0,q;
        for(int i=2;i<n;i++) {
            q=z;
            z=y;
            y=x;
            x += q+z;
        }
        return x;

    
    }
};