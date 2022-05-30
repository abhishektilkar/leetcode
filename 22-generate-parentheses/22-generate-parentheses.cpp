class Solution {
public:
    unordered_set<string> value(int n) {
        unordered_set<string> val;
        if(n == 0) {
            return val;
        }
        if(n == 1) {
            val.insert("()");
            return val;
        }
        unordered_set<string> v = value(n-1);
        string s1;
        for(auto s : v) {
            for(int j=0;j<s.size();j++) {
                s1 = s.substr(0,j)+"()"+s.substr(j);
                val.insert(s1);
            }
        }
        return val;
    }
    vector<string> generateParenthesis(int n) {
        vector<string> val;
        unordered_set<string> v = value(n);
        for(string a : v) {
            val.push_back(a);
        }
        
        return val;
    }





};