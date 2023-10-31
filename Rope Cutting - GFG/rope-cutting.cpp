//{ Driver Code Starts
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
        vector<int> RopeCutting(int arr[], int n)
    {
        vector<int> ans;
        int rL=n;
        
        sort(arr,arr+n);
        
        int i=0;
        while(rL!=0){
            int j=i+1;
            while(arr[j]==arr[i]) j++;
            
            rL=rL-(j-i);
            
            if(rL!=0) ans.push_back(rL);
            
            i=j;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{   
    int T;
    cin>> T;
    while(T--)
    {
       	int n;
       	cin>>n;
       	int arr[n+1];
       	for(int i=0;i<n;i++)
       	   cin>>arr[i];
        
        vector<int> v;
        Solution ob;
        v = ob.RopeCutting(arr, n);
        for(int i : v){
            cout << i << " ";
        }
        cout << endl;
        
        
    }
  return 0;
}
// } Driver Code Ends