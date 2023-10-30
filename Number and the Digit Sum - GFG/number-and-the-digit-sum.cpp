//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int sumofdigit(int i)
    {
        int sum = 0;
        while(i>0)
        {
            int a=i%10;
            sum+=a;
            i=i/10;
        }
        return sum;
        
    }
        long long int numberCount(long long int N, long long int K)
        {
            int count = 0;
            for(int i=0;i<=N;i++)
            {
                int sum = sumofdigit(i);
                //cout<<i-sum<<" ";
                if((i-sum)>=K)
                {
                    count++;
                }
                
            }
            return count;
        }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n, k;
		cin >> n >> k;
		Solution ob;
		cout <<ob.numberCount(n, k) << endl;
	}
	return 0;
}
// } Driver Code Ends