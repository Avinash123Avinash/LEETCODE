class Solution {
public:
    int minSteps(int n) {
        // If n is 1, no operation is needed
        if (n == 1) return 0;

        // DP array to store the minimum steps for each number up to n
        vector<int> dp(n + 1, 0);

        // Fill dp array from 2 to n
        for (int i = 2; i <= n; ++i) {
            dp[i] = i;  // Initialize with the worst case (all 'Paste' operations)
            for (int j = 1; j <= i / 2; ++j) {
                if (i % j == 0) {  // j is a divisor of i
                    dp[i] = min(dp[i], dp[j] + i / j);
                }
            }
        }

        return dp[n];
    }
};
