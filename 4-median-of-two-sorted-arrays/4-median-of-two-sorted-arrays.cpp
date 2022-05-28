class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size();
        int n2 = nums2.size();
        if(n1 > n2) {
            vector<int> temp = nums1;
            nums1 = nums2;
            nums2 = temp;
            int p = n1;
            n1 = n2;
            n2 = p;
        }
        
        int low = 0, high = n1;
        int cut1;
        int cut2;
        int l1,l2,r1,r2;
        while(low <= high) {
            
            cut1 = low + (high-low)/2;
            cut2 = (n1+n2)/2 - cut1;
            
            l1 = cut1==0 ? INT_MIN : nums1[cut1-1];
            l2 = cut2==0 ? INT_MIN : nums2[cut2-1];
            r1 = cut1==n1 ? INT_MAX : nums1[cut1];
            r2 = cut2==n2 ? INT_MAX : nums2[cut2];
            
            if(l1 > r2) {
                high = cut1-1;
            }
            else if(l2 > r1) {
                low = cut1+1;
            }
            else {
                return (n1+n2)%2 == 0 ? (max(l1,l2)/2.0 + min(r1,r2)/2.0) : min(r1,r2);
            }
        }
        
        return -1;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
};