class Solution {
public:
    int kadane(vector<int>& arr, int n){
        int sum=0;
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            mx=max(mx,sum);
            if(sum<0)
            {
                sum=0;
            }
        }
        return mx;
    }
    int maxSubarraySumCircular(vector<int>& arr) {
        int num = arr.size();
         int a=kadane(arr,num);
        if(a<0) return a;
        int sum=0;
        for(int i=0;i<num;i++)
        {
            sum+=arr[i];
            arr[i]=-1*arr[i];
        }
        sum=sum + kadane(arr,num);
        return max(a,sum);
        
    }
};