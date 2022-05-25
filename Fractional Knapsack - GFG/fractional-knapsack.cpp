// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        
       
        
        sort(arr,arr+n,[] (Item a, Item b){
            return (((a.value)*(1.0))/((a.weight)*(1.0))) > (((b.value)*(1.0))/((b.weight)*(1.0)));
        });
        
        double profit = 0;
        
        for(int i=0;i<n and W > 0;i++) {
            if(W >= arr[i].weight) {
                W -= arr[i].weight;
                profit += arr[i].value;
            }
            else{
                double val = (W*(1.0))/arr[i].weight;
                profit += (val*arr[i].value);
                W = 0;
            }
        }
        return profit;
    }
        
};




// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends