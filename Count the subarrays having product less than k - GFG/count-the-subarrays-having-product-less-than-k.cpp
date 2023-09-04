//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends


class Solution{
  public:
    long long countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        if(k<=1) return 0;
        int start=0;
        int end=0;
        long long count=0;
        long long pro=1;
        while( end<n)
        {
           pro=pro*a[end];
           while(pro >= k)
           {
               pro=pro/a[start];
               start++;
           }
            count=count+(end-start+1);
            end++;
           
           
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++) cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends