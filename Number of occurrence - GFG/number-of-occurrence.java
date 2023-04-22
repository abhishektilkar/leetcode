//{ Driver Code Starts
//Initial Template for Java



import java.util.*;
import java.io.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            inputLine = br.readLine().trim().split(" ");
            int n = Integer.parseInt(inputLine[0]);
            int x = Integer.parseInt(inputLine[1]);
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            int ans = new Solution().count(arr, n, x);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java



class Solution {
    int count(int[] arr, int n1, int target) {
        // code here
        int n = arr.length;
        int  l=0,h=n-1,v=0;
        
        int val1 = -1,val2 = -1;
        while(l <= h){
            v = l + (h-l)/2;
            
            if(arr[v] >= target){
                val1 = v;
                h = v-1;

            }
            else l = v+1;

        }
        l=0;
        h=n-1;
        

        if(val1 == -1 || arr[val1] != target) return 0;////new int[] {-1,-1};

        while(l <= h){
            v = l + (h-l)/2;
            
            if(arr[v] <= target){
                val2 = v;
                l = v+1;

            }
            else h = v-1;

        }
        return val2-val1+1;/////new int[] {val1,val2};

    }
}