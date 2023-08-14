class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start=0;
        int mid=0;
        int ro = matrix.size();
        int col = matrix[0].size();
        int end=ro*col-1;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            int midval= matrix[mid/col][mid%col];
            if(midval==target)
            {
                return true;
            }
            else if(midval>target)
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return false;
    }
};