// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	
    	vector<pair<int,int>> meetings(n);
        for(int i=0;i<n;i++) {
            meetings[i].first = arr[i];
            meetings[i].second = dep[i];
        }
        sort(meetings.begin(),meetings.end());
        
    	vector<pair<int,int>> aux = {{meetings[0].first,meetings[0].second}};
    	
    	int count = 1;
    	for(int i=1;i<n;i++) {
    	    int j=0;
    	    for(j=0;j<count;j++) {
    	        if(meetings[i].first > aux[j].second) {
    	            aux[j].first = meetings[i].first;
    	            aux[j].second = meetings[i].second;
    	            break;
    	        }
    	        if(j == count-1) {
    	            j = count + 1;
    	        }
    	    }
    	    if(j == count+2) {
    	        count++;
    	        aux.push_back({meetings[i].first,meetings[i].second});
    	    }
    	}
    	
    	return count;
    	
    }
};


// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends