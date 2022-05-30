class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        unordered_map<char,char> map;
        map[')'] = '(';
        map['}'] = '{';
        map[']'] = '[';
        
        for(int i=0;i<n;i++) {
            if(s[i] == '(' or s[i] == '{' or s[i] == '[')
                st.push(s[i]);
            
            else {
                if(st.empty() || map[s[i]] != st.top()) 
                    return 0;
                st.pop();
            }
        }
        
        return st.empty();
    }












};