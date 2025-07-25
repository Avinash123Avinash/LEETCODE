class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        string s2=s;
        reverse(s2.begin(),s2.end());
        vector<vector<int>>dp(n+1,vector<int>(n+1,0));

        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                int notmatch=max(dp[i-1][j],dp[i][j-1]);
                int match=0;
                if(s[i-1]==s2[j-1])
                {
                  match=  1+dp[i-1][j-1];
                }
                dp[i][j]=max(match,notmatch);
            }
        }
        return n-dp[n][n];
    }
};