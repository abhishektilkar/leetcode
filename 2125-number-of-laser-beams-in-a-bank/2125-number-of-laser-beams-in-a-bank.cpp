class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count = 0;
        int curv = 0;
        int n = bank.size();
        for(int i=0;i<n;i++) {
            string s1 = bank[i];
            // for(int j;i)//
            int val = 0;
            for(char a : s1) {
                
                if(a == '1') {
                    val++;
                }
            }
            if(val != 0) {
                count += curv*val;
                curv = val;
            }
        }
        return count;
    }
};