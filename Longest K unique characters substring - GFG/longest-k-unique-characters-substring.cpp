//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        
        int n = s.size();
        unordered_map<char,int> map;
        
        int l = -1;
        
        
        int j=0;
        
        for(int i=0;i<n;i++){
            map[s[i]]++;
            
            while(map.size() > k){
                map[s[j]]--;
                if(map[s[j]] == 0) map.erase(s[j]);
                j++;
                
            }
            if(map.size() == k) l = max(l,i-j+1);
            
        }
        return l;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends