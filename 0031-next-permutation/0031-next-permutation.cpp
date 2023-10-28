class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int l = 0, r = -1;
        for(int i = nums.size() - 1; i >= 0; i--)
        {
            for(int j = i - 1; j >= 0; j--){
                if(nums[j] < nums[i] && (j > l || r == -1)) l = j, r = i;
            }
        }
        if(r == -1) {
            sort(nums.begin(), nums.end());
        }
        else{
            swap(nums[l], nums[r]);
            sort(nums.begin() + l + 1, nums.end());
        }
        
    }
};