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
            int m = Integer.parseInt(inputLine[1]);
            int[][] arr = new int[n][m];
            inputLine = br.readLine().trim().split(" ");
        
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    arr[i][j] = Integer.parseInt(inputLine[i * m + j]);
                }
            }
            int ans = new Solution().rowWithMax1s(arr, n, m);
            System.out.println(ans);
        }
    }
}

// } Driver Code Ends


//User function Template for Java

class Solution {
    
    int Value(int arr[][], int n,int m, int i,int a){
        int l=0,h=m-1,v=0;
        int val = 10000;
        
        while(l <=h){
            v = l+ (h-l)/2;
            
            if(arr[i][v] == 1){
                val = v;
                h = v-1;
                
            }
            else l = v+1;
            
        }
        return val;
        
    }
    int rowWithMax1s(int arr[][], int n, int mi) {
        // code here
        
        int a = 10000,value = -1;
        for(int i=0;i<n;i++){
            
            int h = Value(arr,n,mi,i,a);
            
            if(a > h){
                a = h;
                value = i;
                ////return /////
            }
            
        }
        return value;
        
    }
}