class Solution {
public:
    int reverse(int x) {
     long b=0;
     while(x!=0){
        b= b*10 + x%10;
         x=x/10;
     }   
      return (b < INT_MIN || b > INT_MAX) ? 0 : b;
    }
};