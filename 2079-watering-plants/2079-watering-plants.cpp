class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int b=capacity;
        int i=0;
        int ans=1;
        while(i+1<plants.size())
        {
           capacity = capacity-plants[i];
            if(capacity >= plants[i+1])
            {
                ans++;
            }
            else{
                capacity=b;
                int x= i+1;
                ans= ans+ (2*x)+1;
            }
            i++;
        }
        return ans;
    }
};