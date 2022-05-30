class Solution {
public:
    void value(vector<string> &val, string s, int n,int i, int j) {
        if(i+j == n*2) {
            val.push_back(s);
            return;
        }
        
        if(i < n) value(val,s+"(",n,i+1,j);
        if(j < i) value(val,s+")",n,i,j+1);

    }
    vector<string> generateParenthesis(int n) {
        vector<string> val;
        value(val, "", n, 0, 0);
        return val;
    }


















};