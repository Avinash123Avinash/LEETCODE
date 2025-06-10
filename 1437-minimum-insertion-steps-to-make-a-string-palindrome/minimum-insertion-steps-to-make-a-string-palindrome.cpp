class Solution {
public:
    int minInsertions(string s) {
        string s2=s;
        reverse(s2.begin(),s2.end());
        int n=s.size();
          vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        for (int i = 0; i <= n; i++)
            dp[i][0] = 0;
        for (int j = 0; j <= n; j++) {
            dp[0][j] = 0;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {

                int match = 0;
                int notmatch = max(dp[i - 1][j], dp[i][j - 1]);
                if (s[i-1] == s2[j-1])
                    match = 1 + dp[i - 1][j - 1];

                dp[i][j] = max(match, notmatch);
            }
        }
        return n-dp[n][n];
    }
};