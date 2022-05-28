// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool allocate(int A[], int N,int mid,int M) {
        
        int s = 1;
        int sum = 0;
        
        for(int i=0;i<N;i++) {
            if(A[i] > mid) {
                return 0;
                
            }
            sum += A[i];
            
            if(sum > mid) {
                s++;
                sum = A[i];
                
            }
        }
        
        if(s > M) {
            return 0;
            
        }
        return 1;
        
        
        
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        int low = A[0];
        int high = 0;
        int value;
        
        for(int i=0;i<N;i++) {
            high += A[i];
            
        }
        
        while(low <= high) {
            int mid = low + (high-low)/2;
            
            if(allocate(A,N,mid,M)) {
                high = mid-1;
                value = mid;
                
            }
            else {
                low = mid+1;
                
            }
        }
        return value;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends