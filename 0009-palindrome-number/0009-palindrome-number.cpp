class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        if(x>=0 && x<10)
        {
            return true;
        }
        int k=x;
        long b=0;
        while(x!=0)
        {
            int a=x%10;
            b = b * 10 + a;
            x=x/10;
        }
        if(k==b)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
};