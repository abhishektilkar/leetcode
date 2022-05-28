class Solution {
public:
    int mySqrt(int x){
        if(x <= 1){
            return x;
        }
        int L = 1;
        int h = x;
        int q = 200;
        int q1 = 0;
        while(q--){
            int MiD = L + (h-L)/2;
            if(abs(MiD - (x/MiD)) < 1){
                return MiD;
            }
            else if(MiD < x/MiD){
                q1 = MiD;
                L = MiD + 1;
            }
            else{
                h = MiD-1;
            }
        }
        return q1;
    }










};