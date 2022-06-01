class Solution {
public:
    string reverseWords(string s) {
        
        int n = s.size();
        string strval = "";
        for(int i=0;i<n;i++) {
            
            string path = "";
            while(i < n and s[i] != ' ') path += s[i++];
            
            if(path.size() > 0) strval = " " + path + strval;
        }
        
        if(strval.size() > 0 and strval[0] == ' ') return strval.substr(1);
        return strval;
        
    }





































};