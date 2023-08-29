//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
   /* int t=0;
    int i=0;
    int j=len-1;
    while(i<j){
        int m=min(A[i],A[j]);
        int n=j-i;
        if(m*n>t && i!=j-1)
        {
            t=m*n;
            i++;
        }
        if(i==j-1)
        {
           if(m*n>t)
           {
              t=m*n;
            }
           j--;
           i=0;
        }
        else{
            i++;
        }
        
    }
    return t;*/
    int maxWater = 0;
    int i = 0;
    int j = len - 1;

    while (i < j) {
        int minHeight = min(A[i], A[j]);
        int distance = j - i;
        int water = minHeight * distance;
        
        maxWater = max(maxWater, water);
        
        if (A[i] < A[j]) {
            i++;
        } else {
            j--;
        }
    }
    
    return maxWater;
    // Your code goes here
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends