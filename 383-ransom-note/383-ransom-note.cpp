class Solution {
public:
    bool canConstruct(string ransOmNote, string magazine) {
        unordered_map<char,int> map;
        
        for(char ch : magazine) {
            map[ch]++;
        }
        for(char ch : ransOmNote) {
            if(map[ch]-- <= 0) {
                return 0;
            }
        }
        return 1;
    }








































};