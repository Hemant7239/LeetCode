//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
  long long CountsubarraylessthanR(int N,vector<int> A, long long R)
  {
       int i=0;
        int j=0;
        long long count=0;
        long long sum=0;
        while(j<N)
        {
            sum=sum+A[j];
            while(sum>R)
            {
                sum=sum-A[i];
                i++;
            }
            count+=j-i+1;
            j++;
        }
        return count;
  }
    long long countSubarray(int N,vector<int> A,long long L,long long R) {
       // if(L==R) return 0;
        long long greater= CountsubarraylessthanR(N,A,R);
        long long Smaller= CountsubarraylessthanR(N,A,L-1);
        return greater-Smaller;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        long long L,R;
        cin>>N>>L>>R;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        Solution obj;
        auto ans = obj.countSubarray(N,A,L,R);
        cout<<ans<<endl;
    }
}  
// } Driver Code Ends