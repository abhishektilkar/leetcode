class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        if(rowIndex == 0) {
            return {1};

        }
        else if(rowIndex == 1) {
            return {1,1};

        }
        vector<int> v;
        vector<int> v1={1,1};
        
        for(int i=2;i<=rowIndex;i++) {
            v.resize(rowIndex+1,1);
            
            for(int j=1;j<i;j++) {
                v[j] = v1[j]+v1[j-1];

            }
            v1 = v;
            
        }
        
        return v;
        
    }






};