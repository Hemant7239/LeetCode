class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int size = arr.size();
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