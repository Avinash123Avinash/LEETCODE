class Solution {
public:

int mod=2*1e9;
int  f(int i,int j,int& cnt,int m,int n, vector<vector<int>>&dp)
{
    
    if(i==m-1 and j==n-1)
    {
       return 1;
    }
     if(dp[i][j]!=-1) return dp[i][j];
    int d=0;
    int l=0;
    if(i<m-1)
     d=f(i+1,j,cnt,m,n,dp);
    if(j<n-1)
    l=f(i,j+1,cnt,m,n,dp);
    return dp[i][j]=(l+d);
}
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int cnt=0;
       return f(0,0,cnt,m,n,dp);
        
    }
};