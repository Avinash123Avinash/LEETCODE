class Solution {
public:
int lcs(string& text1,string& text2,int n,int m,vector<vector<int>>&dp)
{
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(i==0 || j==0)
            dp[i][j]=0;
        }
    }
     for(int i=1;i<n+1;i++)
     {
        for(int j=1;j<m+1;j++)
        {
            if(text1[i-1]==text2[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
     }
     return dp[n][m];
}
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1));
      int k=  lcs(word1,word2,n,m,dp);
      int d=n-k;
      int ins=m-k;
      return d+ins;
        
    }
};