//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
vector<string> result;

    void generateBinaryStrings(int ai){
        //Write your code
        Generate(ai,"");
        //return result;
        for(int i=0;i<result.size();i++){
            cout << result[i] << " ";
        }
        
    }
    void Generate(int i,string s1){
        if(i == 0) {result.push_back(s1); return;}
        int n1 = s1.size();
        Generate(i-1,s1+"0");
        if(s1[n1-1] != '1'){
            Generate(i-1,s1+"1");
            
        }
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends