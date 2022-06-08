class Solution {
public:
    bool isAnagram(string STR, string T) {
        sort(STR.begin(),STR.end());
        sort(T.begin(),T.end());
        return STR == T;
    }
















































};