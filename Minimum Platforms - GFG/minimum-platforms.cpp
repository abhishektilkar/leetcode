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
    int findPlatform(int arr[], int parture[], int N)
    {
    	// Your code here
    	
    	sort(arr,arr+N);
    	sort(parture,parture+N);
    	int i=0;
    	int j=0;
    	int Nmax = 0;
    	int maxvaL = 0;
    	while(i<N && j<N){
    	    if(arr[i] <= parture[j]){
    	        Nmax++;
    	        i++;
    	    }
    	    else{
    	        Nmax--;
    	        j++;
    	    }
    	    maxvaL = max(maxvaL,Nmax);
    	}
    	return maxvaL;
    	
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