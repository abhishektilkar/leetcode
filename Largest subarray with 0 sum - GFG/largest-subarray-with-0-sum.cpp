// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    
    public:
    
    int maxLen(vector<int>&A, int n) {
        
        // Your code here
        
        unordered_map<int,int> map;
        
        int psum = 0;

        int maxlength = 0;
        
        for(int i=0;i<n;i++) {
            
            psum += A[i];
            
            if(psum == 0) {
                
                maxlength = max(i+1,maxlength);
                    
            }
            
            if(map.count(psum)) {
                
                maxlength = max(i-map[psum],maxlength);
                
            }
            
            else{
                
                map[psum] = i;
                
            }
            
        }
        
        return maxlength;
        
    }
    
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}


  // } Driver Code Ends