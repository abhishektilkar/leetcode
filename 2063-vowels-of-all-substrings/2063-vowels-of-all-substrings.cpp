class Solution {
public:
    bool isVowel(char ch) {
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            return 1;
        }
        return 0;
    }
    
    long long countVowels(string word) {
        
        int n = word.size();
        
        long long countrvt = 0;
        long long countrvsat = 0;
        long long val = 0;
        for(int i=0;i<n;i++) {
            if(isVowel(word[i])) {
                countrvt++;
            }
            val += (i+1)*countrvt - countrvsat;
            countrvsat += countrvt;
        }
        return val;
    }






























};