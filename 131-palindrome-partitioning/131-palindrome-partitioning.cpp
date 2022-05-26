class Solution {
public:
    bool ispalindrome(string que) {
        int n = que.size();
        if(n == 0) {
            return 0;
        }
        int l=0,h=n-1;
        while(l<h){
            if(que[l] != que[h]) {
                return false;
            }
            l++;
            h--;
        }
        return 1;
    }
    vector<vector<string>> v;
    void help(vector<string> &now, string que) {
        int n = que.size();
        if(n == 0) {
            v.push_back(now);
            return;
        }
        
        for(int i=0;i<n;i++) {
            int p = 0;
            int q = i;
            string string1 = que.substr(p,q+1);
            if(ispalindrome(string1)) {
                now.push_back(string1);
                help(now,que.substr(q+1));
                now.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        int n = s.size();
        // for(int i=0;i<n;i++) {}
        vector<string> now;
        help(now,s);
        // cout << s.substr(0,1);
        return v;
    }
};