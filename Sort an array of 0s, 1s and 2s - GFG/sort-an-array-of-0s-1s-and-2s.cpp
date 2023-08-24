//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int b=0;
        int b1=0;
        int b2=0;
        for(int i=0;i<n;i++)
       {
           if(a[i]==0)
           {
               b++;
           }
            if(a[i]==1)
           {
               b1++;
           }
          else
           {
               b2++;
           }
       }
       
       for(int i=0;i<n;i++)
       {
           if(i<b)
           {
               a[i]=0;
           }
           if(i>=b && b<b+b1)
           {
               a[i]=1;
           }
           if(i>=b+b1 && i<n)
           {
               a[i]=2;
           }
       }
       
       
        // code here 
    }
    
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}


// } Driver Code Ends