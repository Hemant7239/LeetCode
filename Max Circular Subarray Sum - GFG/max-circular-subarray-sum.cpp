//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    
    int kadane(int arr[], int n){
        int sum=0;
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            mx=max(mx,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return mx;
    }
    int circularSubarraySum(int arr[], int num){
        int a=kadane(arr,num);
        if(a<0) return a;
        int sum=0;
        for(int i=0;i<num;i++)
        {
            sum+=arr[i];
            arr[i]=-1*arr[i];
        }
        sum=sum + kadane(arr,num);
        return max(a,sum);
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends