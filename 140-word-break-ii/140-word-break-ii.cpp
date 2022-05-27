class Solution {
public:
    vector<string> value;

    void isha(string s, string v, unordered_map<string,int> set1) {

        if(s.size() == 0) {
            if(v.size() == 0) {
                return;
            }
            if(v[0] == ' '){
                v = v.substr(1);
            }
            if(v[v.size()-1] == ' ') {
                v.pop_back();
            }
            value.push_back(v);
            return;
        }
        string ss = "";
        int n = s.size();
        for(int i=0;i<n;i++) {
            ss = s.substr(0,i+1);
            if(set1[ss]) {
                isha(s.substr(i+1),v+" "+ss,set1);
            }
        }
    } 
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        string v = "";
        unordered_map<string,int> set1;
        int n = wordDict.size();
        for(int i=0;i<n;i++) {
            set1[wordDict[i]]++;
        }
        isha(s,v,set1);
        return value;
    }
};


// 2
// 88
// a above ab ove ov e an and are as be botany branches branch es but compete definition d efin i tion elongated elong ate evolved for group growth have height in includ include including ing independently independent ly is leaves lumber may most narrower not o of only or other perennial plant plants secondary second ary some species specified speci spe cies cified fied stem sunlight supporting taxonomic that the to tower wer tree trees trunk usable usa ble ges usages variety way with woody wood y
// secondarytrees
// 13
// mobile samsung sam sung man mango icecream and go i love ice cream
// iloveicecreamandmango