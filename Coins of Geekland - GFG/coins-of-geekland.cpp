//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//#include<vector>
class Solution{
    
    public:
    int Maximum_Sum(vector<vector<int>> &mat,int N,int k){
        vector<vector<int>>arr(N+1,vector<int>(N+1,0));
        int mx=INT_MIN;
       for(int i=0;i<=N;i++)
       {
           for(int j=0;j<=N;j++)
           {
               if(i==0 || j==0)
               {
                   arr[i][j]=0;
               }
               else{
                   arr[i][j]=mat[i-1][j-1]+arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];
               }
               if(i>=k && j>=k)
               {
                   mx=max(arr[i][j]-(arr[i][j-k]+arr[i-k][j]-arr[i-k][j-k]), mx);
               }
           }
       }
       return mx;
      
       
    }  
};

//{ Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}

// } Driver Code Ends