//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	    int a= arr[n-1];
	    int great= a;
	    for(int i=n-1; i>=0;i--)
	    {
	        
	        if(i==n-1)
	        {
	            arr[i]=-1;
	        }
	        else{
	            
	             
	             great=max(great, a);
	             a=arr[i];
	             arr[i]=great;
	             
	        }
	    }
	    // code here
	}


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.nextGreatest(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends