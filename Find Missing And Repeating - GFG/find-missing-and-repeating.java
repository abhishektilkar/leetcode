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
            String[] str = br.readLine().split(" ");

            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = Integer.parseInt(str[i]);
            }

            int[] ans = new Solve().findTwoElement(a, n);
            System.out.println(ans[0] + " " + ans[1]);
        }
    }
}
// } Driver Code Ends


// User function Template for Java

class Solve {
    int[] findTwoElement(int arr[], int n) {
        // code here
        
        
        int val = 0;
        for(int i=0;i<n;i++){
            
            val ^= arr[i];
        
            val ^= (i+1);
            
        }
        int rmstb = (val & (~(val-1)));
        int a = 0;
        int b = 0;
        for(int i=0;i<n;i++){
            
            if((arr[i] & rmstb) != 0) a ^= arr[i];
            else b ^= arr[i];
            
            if((rmstb & (i+1)) != 0) a ^= (i+1);
            else b ^= (i+1);
            
        }
        for(int i=0;i<n;i++){
            if(arr[i] == b) return new int[] {b,a};
            
        }
        int[] list = {a,b};
        return list;
        
        
    }
}