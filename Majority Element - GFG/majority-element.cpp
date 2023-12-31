//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int arr[], int size)
    {
        
       /* int count=0;
        int p=arr[0];
        int j=1;
        int i=1;
        while(i<size && j<(size/2)+1)
        {
            if(p==arr[i])
            {
                count++;
                if(count>size/2)
                {
                    cout<<count<<endl;
                    return arr[i];
                }
            }
            if(i==size-1)
            {
                i=0;
                p=arr[j++];
            }
            else{
                i++;
        }
        }*/
        int ansindex=0;
        int count=1;
        for(int i=1;i<size;i++)
        {
            if(arr[i]==arr[ansindex])
            {
                count++;
                
            }
            else{
                count--;
            }
            if(count==0)
            {
                ansindex=i;
                count=1;
            }
        }
        count=0;
        for(int i=0;i<size;i++)
        {
            if(arr[ansindex]==arr[i])
            {
                count++;
            }
        }
        
        if(count > size/2)
        {
            //cout<<count<<endl;
            return arr[ansindex];
        }
        else{
            return -1;
        }
        
        
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends