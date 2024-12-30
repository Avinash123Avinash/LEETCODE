class Solution {
public:
int f(vector<vector<int>>& triangle,int i,int j,int n,vector<vector<int>>& dp)
{
    if(i==n-1)
    return triangle[i][j];
    if(i>=n-1)
    return INT_MAX;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int bt=f(triangle,i+1,j,n,dp);
    int br=f(triangle,i+1,j+1,n,dp);
    return dp[i][j]=triangle[i][j]+min(bt,br);
}
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return f(triangle,0,0,n,dp);
            }
};