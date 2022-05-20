class Solution {

public:
    
    double myPow(double x, int n) {
        
        int ana = abs(n);
        
        
        if(ana == 0) {
            
            return 1;
        
        }
        
        double value = 1;
        
        double val = myPow(x,ana/2);
        
        if(ana&1 == 1) {
            
            value = val * val * x;
        
        }
        
        else {
        
            value = val * val;
        
        }
        
        if(n < 0) {
            
            return 1/value;
        
        }
        
        return value;
        
    }
    
};