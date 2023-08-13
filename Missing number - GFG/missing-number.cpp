//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int missingNumber(int a[], int n);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0, n;
		cin>>n;
		int a[n+5];
		for(i=0;i<n-1;i++)
			cin>>a[i];
			
		cout<<missingNumber(a, n)<<endl;
	}
}
// } Driver Code Ends

#include<climits>
#include<unordered_map>
int missingNumber(int A[], int N)
{
    unordered_map<int, int> p;
    int m=INT_MIN;
    for(int i=0;i<N-1;i++)
    {
        if(m<A[i])
        {
            m=A[i];
        }
        p[A[i]]++;
    }
    if(N>m)
    {
        return N;
    }
    for(int i=1;i<m;i++)
    {
        if(p[i]==0)
        {
            return i;
        }
    }
    // Your code goes here
}