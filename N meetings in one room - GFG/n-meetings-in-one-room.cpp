// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    
    bool comparatorval(pair<int,int> a,pair<int,int> b){
        if(a.second < b.second){
            return true;
        }
        return false;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> meetings(n);
        for(int i=0;i<n;i++) {
            meetings[i].first = start[i];
            meetings[i].second = end[i];
        }
        sort(meetings.begin(),meetings.end(),[] (pair<int,int> a, pair<int,int> b){
            return a.second < b.second;
        });
        
        int end1 = -1;
        int count = 0;
        for(int i=0;i<n;i++) {
            if(meetings[i].first > end1) {
                count++;
                end1 = meetings[i].second;
            }
        }
        
        return count;
    }
};















// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends