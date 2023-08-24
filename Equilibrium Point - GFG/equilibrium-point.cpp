//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
      if(n==1)
      {
          return 1;
      }
      if(n==2)
      {
          return -1;
      }
      int totalSum=0;
      for(int i=0;i<n;i++)
      {
          totalSum+=a[i];
      }
      int leftSum=0;
      for(int i=0;i<n;i++)
      {
          totalSum-=a[i];
          if(leftSum==totalSum)
          {
              return i+1;
          }
          leftSum+=a[i];
      }
      return -1;
     /* int fsum=0;
      int esum=0;
      int i=0;
      int j=n-1;
      while(i<j)
      {
          if(fsum<esum)
          {
                  fsum+=a[i];
                  i++;
              
          }
          else if(esum<fsum)
          {
                  esum+=a[i];
                  j--;
              
          }
          else if(esum==fsum)
          {
              if(j-i!=2)
              {
                fsum+=a[i];
                esum+=a[j];
                i++;
                j--;
              }
             if(j-i==2)
              {
                 fsum+=a[i];
                esum+=a[j]; 
                if(esum==fsum)
                {
                 int mid=(i+j)/2;
                 return mid+1;
                 break;
                 }
               
             /* else if(j-i<2)
              {
                  return -1;
              }
              else{
                 
                  i++;
                  j--;
              }*//*
          }
      }
      */
     /* if(i==j && fsum==esum)
      {
          int z=(i+j)/2;
          return z+1; 
      }*/
      
     /* int mid=n/2;
      for(int i=0;i<n;i++)
      {
          if(i<mid)
          {
             fsum=fsum+a[i]; 
          }
          else if(i>mid)
          {
              esum=esum+a[i];
          }
          
      }
      if(fsum==esum)
      {
          return mid+1;
      }
      else{
          return -1;
      }*/
      
        // Your code here
    
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends