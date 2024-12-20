class Solution {
public:

int f(string&s,string&b,vector<vector<int>>&dp,int n)
{
    for(int i=0;i<n+1;i++)
    {
        dp[0][i]=0;
        dp[i][0]=0;
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            if(s[i-1]==b[j-1])
            dp[i][j]=1+dp[i-1][j-1];
            else
            {
                dp[i][j]=0;
            }
        }
    }
    return dp[n][n];
}
    string longestPalindrome(string s) {
       string b(s.rbegin(), s.rend()); // Reverse of the string
        int n = s.size();
        vector<vector<int>> dp(n+1, vector<int>(n+1, 0));

        int maxLength = 0;  // To store the length of the longest palindromic substring
        int endIndex = 0;   // To store the end index of the longest palindromic substring in the original string

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                // Check if characters match
                if (s[i-1] == b[j-1]) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                    
                    // Ensure that the matching substring corresponds to the same indices in the original string
                    if (dp[i][j] > maxLength && (i - dp[i][j]) == (n - j)) {
                        maxLength = dp[i][j];
                        endIndex = i; // Track where the palindrome ends in `s`
                    }
                }
            }
        }

        // The longest palindromic substring will be between [endIndex - maxLength, endIndex)
        return s.substr(endIndex - maxLength, maxLength);
    }
};