class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> s;
        int maxA;
        for(int i=0;i<=n;i++) {
            
    // empty nahi to // and // i==n ho // ya //increasing na ho toh //
            while(!s.empty() and (i == n or heights[s.top()] >= heights[i])) {
                int h = heights[s.top()];
                s.pop();
                int w;
                if(s.empty()) w = i;
                else w = i - s.top() - 1;
                maxA = max(maxA,h*w);
            }
            
            s.push(i);
        }
        return maxA;
    }













};