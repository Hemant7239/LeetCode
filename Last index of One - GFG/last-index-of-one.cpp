//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lastIndex(string s) 
    {
        int k=0;
        int count=0;
        int l=s.size();
       for(int i=0;i<l;i++)
       {
           if(s[i]=='1')
           {
               count++;
               k=i;
           }
       }
       if(count==0)
       {
           return -1;
       }
       else{
           return k;
       }
    }

};

//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.lastIndex(s) << endl;
    }
    return 0;
}
// } Driver Code Ends