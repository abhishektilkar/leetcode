// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    
    vector<int> ansresult;
    void sum(vector<int> arr,int N,int sum1,int i) {
        if(i == N){
            ansresult.push_back(sum1);
            return;
        }
        
        sum(arr,N,sum1,i+1);
        sum(arr,N,sum1+arr[i],i+1);
    }
    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        sum(arr,N,0,0);
        return ansresult;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends