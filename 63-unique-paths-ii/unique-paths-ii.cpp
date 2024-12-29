class Solution {
public:
int f( vector<vector<int>>&dp,vector<vector<int>>&arr,int i,int j,int m,int n)
{
    if(i==0 and j==0)
    return 1;
    if(i<0 || j<0)
    return 0;
    if(arr[i][j]==1)
    return 0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int up=f(dp,arr,i-1,j,m,n);
    int left=f(dp,arr,i,j-1,m,n);
    return dp[i][j]= up+left;

}
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {
       int m= arr.size();
       int n=arr[0].size();
       int i=m-1;
       int j=n-1;
       vector<vector<int>>dp(m,vector<int>(n,-1));
       if( arr[0][0]==1)
       return 0;
       return f(dp,arr,i,j,m,n);

    }
};