class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size();
   int m=mat[0].size();
   int maxi=INT_MIN;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
         maxi=max(mat[i][j],maxi);
    }
   }
     for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        if(maxi==mat[i][j])
        return {i,j};
    }
   }
   return {-1,-1};
    }
};