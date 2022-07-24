class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> v(10001,0);

        for(int i : nums) v[i]++;
        int p1=0,p2=0;
        int val;
        
        
        for(int i=1;i<10001;i++) {
            val = max(p1,i*v[i] + p2);
            p2 = p1;
            p1 = val;
        }
        
        return val;

        
    }
};