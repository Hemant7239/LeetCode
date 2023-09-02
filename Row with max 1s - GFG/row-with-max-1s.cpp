//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
    int lower(vector<int> arr, int m, int x)
    {
        int ans=m;
        int i=0;
        int j=m-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(arr[mid]>=x)
            {
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int ct=0;
	    int index=-1;
	  for(int i=0;i<n;i++)
	  {
	      int cnt=m-lower(arr[i],m,1);
	      if(cnt>ct)
	      {
	          ct=cnt;
	          index=i;
	      }
	  }
	  return index;
	}

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n,vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin>>arr[i][j];
            }
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends