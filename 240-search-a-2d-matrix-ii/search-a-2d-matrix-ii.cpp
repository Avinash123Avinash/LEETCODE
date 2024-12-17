class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int nrow=matrix.size();
        int ncol=matrix[0].size();
       int low=0;
       int high=nrow-1;
      for(int i=0;i<nrow;i++)
      {
       
            for(int j=0;j<ncol;j++)
            {
                if(matrix[i][j]==target)
                return true;
            }
        }
    
        return false;
    
    }
};