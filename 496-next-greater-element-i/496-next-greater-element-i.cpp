class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ng2(nums2.size());
        stack<int> s;
        unordered_map<int,int> map;
        
        for(int i=nums2.size()-1;i>=0;i--) {
        
            map[nums2[i]] = i;
            
            while(!s.empty()) {
                
                if(s.top() <= nums2[i]) s.pop();
                else {
                    ng2[i] = s.top(); 
                    s.push(nums2[i]);
                    break;
                }
            }
            
            if(s.empty()) {
                ng2[i] = -1;
                s.push(nums2[i]);
            }
        }
        vector<int> ng1(nums1.size());
        int j=0;
        for(int a : nums1) {
            ng1[j] = ng2[map[a]];
            j++;
        }
        return ng1;
    }

};