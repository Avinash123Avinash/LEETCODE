class Solution {
public:
// this question is same as the longest subsequence 
    int longestPalindromeSubseq(string s) {
        string s2=s;
        reverse(s2.begin(),s2.end());
        int n=s.size();
        //   vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
          vector<int>prev(n+1,0),curr(n+1,0);
       

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {

                int match = 0;
                int notmatch = max(prev[j], curr[j - 1]);
                if (s[i-1] == s2[j-1])
                    match = 1 + prev[j - 1];

                curr[j] = max(match, notmatch);
            }
            prev=curr;
        }
        return prev[n];
    }
};