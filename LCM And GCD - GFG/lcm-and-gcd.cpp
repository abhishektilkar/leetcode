//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  long Getgcd(long long A, long long B){
      if(B == 0) return A;
      return Getgcd(B,A%B);
      
  }
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        
        vector<long long> v(2);
        if(A < B) swap(A,B);
//        cout << A << B;
        long gcd = Getgcd(A,B);
        long lcm = (A/gcd)*B;
        v[0] = lcm;
        v[1] = gcd;
        
        return v;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends