class Solution {
public:
    long long appealSum(string s) {
        int n = s.size();
        long long value = 0;
        vector<int> v(27,-1);
        long long val = 0;
        
        for(int i=0;i<n;i++) {
            val = val + i - v[s[i] - 'a'];
            v[s[i] - 'a'] = i;
            value += val;
        }
        return value;
    }
};