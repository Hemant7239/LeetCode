//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

#include<vector>
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int>p;
        int rep;
        for(int i = 0;i < n;i++)
        {
            if(arr[abs(arr[i])-1] < 0)
            {
                rep = abs(arr[i]);
            }
            else{
                arr[abs(arr[i])-1] = -arr[abs(arr[i])-1];
            }
        }
        p.push_back(rep);
        int mis;
        for(int i = 0;i < n;i++)
        {
            if(arr[i] > 0)
            {
                mis = i+1;
                break;
            }
        }
        p.push_back(mis);
        return p;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends