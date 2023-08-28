//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    //sorting the array 
	   /* for(int i=0;i<n;i++)
	    {
	        int mi=arr[i];
	        for(int j=i+1;j<n;j++)
	        {
	            
	            mi=min(arr[j],mi);
	            
	        }
	        arr[i]=mi
	    }*/
	    //sorting function used 
	    sort(arr,arr+n);
	    
	    
	   //counting s<sum;
	    long long count=0;
	    for(int l=0;l<n-2;l++)
	    {
	        int m=l+1;
	        int r=n-1;
	        while(m<r){
	            int s=arr[l]+arr[m]+arr[r];
	            if(s<sum)
	            {
	                count += (r-m);
	                m++;
	            }
	            else
	            {
	                r--;
	            }
	        }
	        
	    }
	    return count;
	}
		 

};

//{ Driver Code Starts.

int main() 
{
  
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
    	long long sum;
        cin>>n>>sum;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
	    

       

        Solution ob;
        cout << ob.countTriplets(arr, n, sum) ;
	   
        
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends