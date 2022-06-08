class Solution {
public:
    bool containsDuplicate(vector<int>& NumS){
        unordered_set<int> S;
        for(int i=0;i<NumS.size();i++){
            S.insert(NumS[i]);
        }
        if(NumS.size() == S.size()){
            return 0;
        }
        return true;
    }











































};