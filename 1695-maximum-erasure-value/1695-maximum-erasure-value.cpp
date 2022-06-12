class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums){
        vector<int> v(10000+1,0);
        int N = nums.size();
        int i=0;
        // i
        // i
        // q
        int j = 0;
        // while(CouNT)
        int SuM = 0;
        // int CouNT
        // int
        // int
        // i
        int MaxSuM = 0;
        int v1 = 0;
        while(i<N){
            if(v[nums[i]] == 1){
                v1++;
            }
            SuM = SuM + nums[i];
            v[nums[i]]++;
            while(v1){
                if(v[nums[j]] == 2){
                    v1--;
                }
                v[nums[j]]--;
                SuM = SuM - nums[j];
                j++;
            }
            if(v1 == 0){
                MaxSuM = max(SuM,MaxSuM);
            }
            i++;
        }
        return MaxSuM;
        // i
        // heLL
        // oL
    }













};