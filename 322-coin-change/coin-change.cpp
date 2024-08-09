class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        vector<vector<int>> dp(n + 1, vector<int>(amount + 1, INT_MAX));

        // Initialize the dp array
        for (int i = 0; i <= n; i++) {
            dp[i][0] = 0; // Amount 0 can always be achieved with 0 coins
        }

        for (int j = 1; j <= amount; j++) {
            if (j % coins[0] == 0)
                dp[1][j] = j / coins[0];
            else
                dp[1][j] = INT_MAX - 1; // Set it to a large value
        }

        // Fill the dp table
        for (int i = 2; i <= n; i++) {
            for (int j = 1; j <= amount; j++) {
                if (coins[i - 1] <= j) {
                    dp[i][j] = min(dp[i][j - coins[i - 1]] + 1, dp[i - 1][j]);
                } else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        // If it's not possible to form the amount, return -1
        return dp[n][amount] == INT_MAX-1 ? -1 : dp[n][amount];
    }
};
