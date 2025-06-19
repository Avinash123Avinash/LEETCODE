class Solution {
public:
int f(int ind,int buy,int cnt,vector<int>&prices,int n,int k,vector<vector<vector<int>>>&dp)
{
    if(ind==n || cnt==k)
    return 0;
    if(dp[ind][buy][cnt]!=-1)
    return dp[ind][buy][cnt];
    int profit=0;
    if(buy)
    {
      return dp[ind][buy][cnt]=max((-prices[ind]+f(ind+1,0,cnt,prices,n,k,dp)),(f(ind+1,1,cnt,prices,n,k,dp)));
    }
    else
    {
        return dp[ind][buy][cnt]=max((prices[ind]+f(ind+1,1,cnt+1,prices,n,k,dp)),(f(ind+1,0,cnt,prices,n,k,dp)));
    }
    return dp[ind][buy][cnt]=profit;
}
    int maxProfit(int k, vector<int>& prices) {
        int n=prices.size();
      vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1, -1)));

        return f(0,1,0,prices,n, k,dp);
    }
};