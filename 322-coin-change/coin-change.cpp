class Solution {
public:
    int f(int ind, int k, vector<int>& coins,vector<vector<int>>&dp) {
        if (ind == 0) {
            if (k % coins[0] == 0)
                return dp[ind][k]=k / coins[0];
            return dp[ind][k]=1e9;
        }
        if(dp[ind][k]!=-1)
        return dp[ind][k];

        // if (k % coins[ind] == 0)
        //     return k / coins[ind];
        int taken = 1e9;
        if (coins[ind] <= k) {
            taken = 1 + f(ind, k - coins[ind], coins,dp);
        }
        int nottaken = f(ind - 1, k, coins,dp);
        
        return dp[ind][k]=min(taken, nottaken);
    }
    int coinChange(vector<int>& coins, int amount) {
        sort(coins.begin(),coins.end());
        int n = coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        f(n - 1, amount, coins,dp);
        return dp[n-1][amount]!=1e9?dp[n-1][amount]:-1;
    }
};