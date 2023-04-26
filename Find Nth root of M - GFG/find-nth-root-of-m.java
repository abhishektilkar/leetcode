//{ Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
    public static void main(String[] args) throws IOException
    {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine().trim());
        while(T-->0)
        {
            String s = br.readLine().trim();
            String[] S1 = s.split(" ");
            int n = Integer.parseInt(S1[0]);
            int m = Integer.parseInt(S1[1]);
            Solution ob = new Solution();
            int ans = ob.NthRoot(n, m);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution
{   
    int Value(int n, int m,int i){
        long val = i;
        
        for(int j=1;j<n;j++){
            val *= i;
            if(val > m) return 1;
            
        }
        if(val == m) return 0;
        return -1;
        
    }
    public int NthRoot(int n, int m)
    {
        // code here
        int l = 1,h = m,v=0;
        while(l <= h){
            v = l+(h-l)/2;
            int a = Value(n,m,v);
            if(a == 0) return v;
            else if(a == -1) l = v+1;
            else h = v-1;
            
        }
        return -1;
        
    }
}