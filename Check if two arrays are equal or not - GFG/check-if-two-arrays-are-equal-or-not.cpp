//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

// } Driver Code Ends
//User function template for C++
#include<unordered_map>
class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
       unordered_map<int,int> p;
       // unordered_map<int,int> sing
        for(int i=0;i<N;i++)
        {
           // sing[A[i]]++;
            
              p[A[i]]++;
            
        }
        for(int j=0;j<N;j++)
        {
            if(p[B[j]]>0)
            {
               p[B[j]]--;
            }
            else{
                return false;
            }
            
        }
        
        /*for(auto s:p)
        {
            if(s.second<2)
            {
                return false;
            }
        }*/
        return true;
        //code here
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends