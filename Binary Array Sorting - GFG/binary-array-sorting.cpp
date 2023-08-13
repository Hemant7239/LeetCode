//{ Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#include<unordered_map>
class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
        int count=0;
       // unordered_map<int,int> p;
        for(int i=0;i<N;i++)
        {
            if(A[i]==1)
            {
                count++;
            }
        }
        int s=N-count;
        for(int j=0;j<N;j++)
        {
            if(j>=s)
            {
                A[j]=1;
            }
            else{
                A[j]=0;
            }
        }
       //Your code here
       
       /**************
        * No need to print the array
        * ************/
    }
};

//{ Driver Code Starts.
int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    Solution obj;
	    obj.binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}




// } Driver Code Ends