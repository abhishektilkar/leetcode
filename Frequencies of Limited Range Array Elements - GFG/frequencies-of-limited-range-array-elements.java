//{ Driver Code Starts
import java.io.*;
import java.util.*;

class GFG {
    
    public static void main (String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        
        //testcases
        int t = Integer.parseInt(br.readLine().trim()); 
        while(t-->0){
            
            //size of array
            int N = Integer.parseInt(br.readLine().trim()); 
            int arr[] = new int[N];
            String inputLine[] = br.readLine().trim().split(" ");

            //adding elements to the array
            for(int i = 0 ; i < N; i++){
                arr[i]=Integer.parseInt(inputLine[i]); 
            }
            int P= Integer.parseInt(br.readLine().trim());
            //calling frequncycount() function
            Solution ob = new Solution();
            ob.frequencyCount(arr, N, P); 
            
            //printing array elements
            for(int i = 0; i < N ; i++)
                System.out.print(arr[i] + " " );
            System.out.println();
        }
    }
}




// } Driver Code Ends


class Solution{
    //Function to count the frequency of all elements from 1 to N in the array.
    public static void frequencyCount(int arr[], int N, int P)
    {
        HashMap<Integer,Integer> chmap = new HashMap<Integer,Integer>();
        
        for(int c1 : arr) {
            
            Integer c = c1;
            
            if (chmap.containsKey(c)) {
                chmap.put(c, chmap.get(c) + 1);
            }
            else {
                chmap.put(c, 1);
            }
            
        }
        
        // for(int c1 : arr){
        //     Integer c = c1;
        //     Integer count = chmap.get(c);
        //     System.out.print(count + " ");
            
        // }
        // for(int ic=1;ic<N;ic++){
        //     Integer count = chmap.get(arr[ic]);
            
        //     arr[ic] = count;
            
        // }
        for(int ic = 1;ic <= N;ic++){
            Integer count = chmap.get(ic);
            if(count == null) arr[ic-1] = 0;
            else arr[ic-1] = count;
            
        }
    }
}
