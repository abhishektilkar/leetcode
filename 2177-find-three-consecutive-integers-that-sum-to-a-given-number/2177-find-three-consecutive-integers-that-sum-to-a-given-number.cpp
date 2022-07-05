class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        
        long long val = 0;
//         if(num == 0) {
//             return {};
            
//         }
        
        if(num%3 == 0) {
            val = num/3;
            return {val-1,val,val+1};
        }
        
        return {};
    }
};