class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int nrow=matrix.size();
        int ncol=matrix[0].size();
       int low=0;
       int high=nrow-1;
       while(low<=high)
       {
        int mid=(low+high)/2;
        if(matrix[mid][0]>target)
        high=mid-1;
        else
        low=mid+1;

       
            for(int j=0;j<ncol;j++)
            {
                if(matrix[mid][j]==target)
                return true;
            }
        }
    
        return false;
    }
};