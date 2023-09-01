class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        bool* prime= new bool[n];
        for(int j=2;j<n;j++)
        {
            prime[j]=true;
        }
        for(int i=2;i*i<n;i++)
        {
           if(!prime[i]) continue;
            
           for(int j=i*i;j<n;j+=i)
           {
               prime[j]=false;
           }
        }
         for(int j=2;j<n;j++)
         {
            if(prime[j]==true) count++;
         }
        return count;
        
       
    }
};