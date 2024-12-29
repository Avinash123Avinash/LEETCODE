class Solution {
public:
int f(vector<vector<int>>&dp,vector<vector<int>>& grid,int i,int j )
{
    if(i==0 and j==0)
    return grid[i][j];
  if(i<0 || j<0)
    return INT_MAX;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int top=f(dp,grid,i-1,j);
  
    int left=f(dp,grid,i,j-1);
   
    return dp[i][j]=grid[i][j]+min(top,left);
}
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
         int mini=INT_MAX;
         vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(dp,grid,m-1,n-1);
    }
};