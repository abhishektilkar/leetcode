class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n);
        stack<int> s;
        
        for(int j=2*n-1;j>=0;j--) {
            int i = j%n;
            
            while((s.size() != 0 )and (s.top() <= nums[i])) {
                s.pop();
            }
            if(s.empty()) {
                v[i] = -1;
            }
            else 
                v[i] = s.top();
            s.push(nums[i]);
        }
        return v;
    }

































};