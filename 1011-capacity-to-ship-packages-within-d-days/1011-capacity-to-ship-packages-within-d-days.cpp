class Solution {
public:
    bool allocate(vector<int>& weights, int n, int mid, int m) {
        int s = 1;
        int sum = 0;
        
        for(int i=0;i<n;i++) {
            if(weights[i] > mid) {
                return 0;
            }
            
            sum += weights[i];
            
            if(sum > mid) {
                s++;
                sum = weights[i];
            }
        }
        
        return !(s>m);
    }
    int shipWithinDays(vector<int>& weights, int m) {
        int n = weights.size();
        int low = weights[0];
        int high = 0;
        for(int i=0;i<n;i++) {
            low = max(low,weights[i]);
            high += weights[i];
        }
        int value = -1;
        while(low <= high) {
            int mid = low + (high-low)/2;
            
            if(allocate(weights,n,mid,m)) {
                value = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return value;
    }












};