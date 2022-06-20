class Solution {
public:
    int minimumNumbers(int num, int k) {
        if(num == 0) {
            return 0;
        }
        if(k == 0) {
            if(num%10 == 0) {
                return 1;
            }
            return -1;
        }
        
        int v = num%10;
        int kv;
        for(int i=1;i<=10;i++) {
            kv = k*i;
            kv = kv%10;
            
            if(kv == v) {
                if(num < i*k) {
                    return -1;
                }
                return i;
            }
        }
        
        return -1;
    }
};