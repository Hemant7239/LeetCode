//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) {
	    vector<int>ps;
	    vector<int>neg;
	    for(int i=0; i<n; i++){
	        if(arr[i]>=0){
	            ps.push_back(arr[i]);
	        }
	        else{
	            neg.push_back(arr[i]);
	        }
	    }
	    int i=0;
	    int j=0;
	    int k=0;
	    while(j<ps.size() && k<neg.size()){
	        arr[i++]=ps[j++];
	        arr[i++]=neg[k++];
	    }
	    while(k<neg.size()){
	        arr[i++]=neg[k++];
	    }
	    while(j<ps.size()){
	        arr[i++]=ps[j++];
	    }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends