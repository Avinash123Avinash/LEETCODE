class Solution {
public:
int f( vector<vector<int>>&dp,int i,int j,int m,int n)
{
    if(i==0 and j==0)
    return 1;
    if(i<0 || j<0)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int up=f(dp,i-1,j,m,n);
    int left=f(dp,i,j-1,m,n);
    return dp[i][j]=up+left;

}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int i=m-1;
        int j=n-1;
        return f(dp,i,j,m,m);
    }
};