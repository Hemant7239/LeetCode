//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        vector<int> p;
        bool found=false;
        if(s==0)
        {
            p.push_back(-1);
            return p;
        }
        
        long long sum=arr[0];
        int j=0;
        int i=0;
        while(i<n)
        {
            if(sum<s)
            {
                i++;
                if(i<n)
                {
                    sum=sum+arr[i];
                }
            }
            else if(sum>s)
            {
                sum=sum-arr[j];
                j++;
            }
            else if(sum==s)
            {
                found= true;
                break;
            }
            
            
        }
        if(found==true)
        {
            p.push_back(j+1);
            p.push_back(i+1);
            return p;
        }
        else{
            p.push_back(-1);
            return p;
        }
        
        // Your code here
        
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends