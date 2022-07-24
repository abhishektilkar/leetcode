class Solution {
public:
    int rob1(vector<int>& nums) {
        
        int previ_1 = nums[0];
        int previ_2 = 0,q;
        int n = nums.size();

        
        for(int i=1;i<n;i++) {
            

            q = max(nums[i]+previ_2, previ_1);
            previ_2 = previ_1;
            previ_1 = q;
            

        }
        return previ_1;
    }
    int rob(vector<int>& nums) {
        
        
        
        
        
        if(nums.size() == 1) {
            return nums[0];
        }
        vector<int> v = nums;
        v.pop_back();
        int val = rob1(v);
        
        
        
        
        
        vector<int> v1;
        v1.insert(v1.end(),nums.begin()+1,nums.end());
        int val1 = rob1(v1);
        return max(val,val1);
        
    }
};