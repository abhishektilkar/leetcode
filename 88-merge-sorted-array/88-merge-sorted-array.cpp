class Solution {
public:
    void merge(vector<int>& nums1, int n1, vector<int>& nums2, int n2) {
        
        // int n1 //
        
        nums1.resize(n1+n2);
        int a = n1-1;
        int b = n2-1;
        int q = n1+n2-1;
        
        while(a >= 0 and b >= 0) {
            
            if(nums1[a] <= nums2[b]) {
                nums1[q] = nums2[b];
                b--;
            }
            else {
                nums1[q] = nums1[a];
                a--;
            }
            q--;
        }
        
        while(b >= 0) {
            nums1[q] = nums2[b];
            b--;
            q--;
        }
                
    }
};