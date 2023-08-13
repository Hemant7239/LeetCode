//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include<map>
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        if(n==0||n==1)
        {
            return;
        }
       int a[n];
       int j=0;
       int l=0;
       int b[n];
       int count=0;
       for(int i=0;i<n;i++)
       {
           if(arr[i]>=0)
           {
               a[j]=arr[i];
               j++;
               count++;
           }
           
       }
       for(int i=0;i<n;i++)
       {
           if(arr[i]<0)
           {
               b[l]=arr[i];
               l++;
           }
       }
       j=0;
       l=0;
       //placing bank in original array 
       for(int k=0;k<n;k++)
       {
           if(k<count)
           {
             arr[k]=a[j];
             j++;
           }
           else{
               arr[k]=b[l];
               l++;
           }
       }
        // Your code goes here
    }
    
};

//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends