class Solution {
public:
int f(int ind,int k,vector<int>&coins,vector<vector<int>>&dp)
{
    if(ind==0)
    {
        if(k%coins[0]==0)
        return dp[ind][k]=1;
        return dp[ind][k]=0;
    }
    if(dp[ind][k]!=-1)
    return dp[ind][k];
    int take=0;
    if(coins[ind]<=k)
    take=f(ind,k-coins[ind],coins,dp);
   int nottake=f(ind-1,k,coins,dp);
    return dp[ind][k]=take+nottake;
}
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        f(n-1,amount,coins,dp);
        return dp[n-1][amount];
    }
};