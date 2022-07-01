class Solution {
public:
    static bool compare(vector<int> a, vector<int> b) {
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(),compare);
        
        int val = 0;
        for(int i=0;i<boxTypes.size();i++) {
            if(truckSize <= 0) {
                return val;
            }
            if(truckSize >= boxTypes[i][0]) {
                val += boxTypes[i][0]*boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
            else {
                val += truckSize*boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
        }
        return val;
    }
};