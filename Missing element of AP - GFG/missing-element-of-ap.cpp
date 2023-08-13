//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMissing(int arr[], int n) {
        // code here
       /* if(n==0 || n==1)
        {
            return 0;
        }*/
        int dif;
        if(n==2)
        {
            dif=arr[1]-arr[0];
            int b=dif/2;
            return arr[0]+b;
        }
        if(n>=3){
        //unordered_map<int,int> p;
        int d=arr[1]-arr[0];
        int d1= arr[2]-arr[1];
        dif=min(d,d1);
        for(int i=1; i<n;i++)
        {
            if(arr[i]-arr[i-1]!=dif)
            {
                return (arr[i-1]+dif);
            }
        }
        }
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMissing(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends