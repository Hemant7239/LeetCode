//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends

#include<climits>
pair<long long, long long> getMinMax(long long a[], int n) {
    long long mina=INT_MAX;
    long long maxa=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(mina > a[i])
        {
            mina=a[i];
        }
        if(maxa<a[i])
        {
            maxa=a[i];
        }
    }
    pair<long long,long long> p(mina,maxa);
    return p;
    
}