//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
       vector<int>temp(leaves+1,0);
       for(int i=0;i<N;i++)
       {
           int pos=frogs[i];
           int k=pos;
           if( pos<=leaves && temp[k]==0)
           {
               
           
           while(pos<=leaves)
           {
               if(temp[pos]==0)
               {
                   temp[pos]=1;
               }
               
               pos+=k;
           }
           }
           
       }
       int count=0;
       for(int i=1;i<leaves+1;i++)
       {
           if(temp[i]==0)
           {
               count++;
           }
       }
       return count;
       
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends