//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        int start=0;
        int end=n-1;
        vector<int> result;
        int res1=-1;
        int res2=-1;
        while(start<=end)
        {
            int mid=(end+start)/2;
            if(x==arr[mid])
            {
                res1=mid;
                end=mid-1;
            }
            else if(x<arr[mid])
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        start=0;
        end=n-1;
         while(start<=end)
        {
            int mid=(end+start)/2;
            if(x==arr[mid])
            {
                res2=mid;
                start=mid+1;
            }
            else if(x<arr[mid])
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        if(res1<0 && res2<0)
        {
            result.push_back(-1);
        }
        else{
            result.push_back(res1);
            result.push_back(res2);
        }
        return result;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends