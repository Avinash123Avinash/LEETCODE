class Solution {
public:
    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                int notmatch=max(dp[i-1][j],dp[i][j-1]);
                int match=0;
                if(word1[i-1]==word2[j-1])
                {
                    match=1+dp[i-1][j-1];
                }
                dp[i][j]=max(match,notmatch);
            }
        }
        return (n+m)-(2*dp[n][m]);
    }
};