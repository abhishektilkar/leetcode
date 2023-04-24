//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    // Driver code
    public static void main(String[] args) throws Exception {
        BufferedReader br =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine().trim());
            String[] str = br.readLine().trim().split(" ");
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(str[i]);
            }

            int ans = new Solution().findKRotation(a, n);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


// User function Template for Java

class Solution {
    int findKRotation(int arrnums[], int n1) {
	    // code here
	    
	    int n = arrnums.length;
	    
	    int l=0,h = n-1,v=0;
	    
	    while(l <= h){
	        v = l+(h-l)/2;
	        if(v != 0 && arrnums[v-1] > arrnums[v]) return v;
	        if(arrnums[h] < arrnums[v]){
	            
	            l = v+1;
	            
	        }
	        else h = v-1;
	        
	    }
	    return v;
	    
	}
}