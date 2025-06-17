class Solution {
public:
int f(int ind,int buy,vector<int>&prices,int cnt,vector<vector<vector<int>>>&dp)
{
    if(ind==prices.size() || cnt==2)
    return 0;
    if(dp[ind][buy][cnt]!=-1)
    return dp[ind][buy][cnt];
int profit=0;
    if(buy)
    {
     profit=max((-prices[ind]+f(ind+1,0,prices,cnt,dp)),(f(ind+1,1,prices,cnt,dp)));
    }
    else
    {
        profit=max((prices[ind]+f(ind+1,1,prices,cnt+1,dp)),(f(ind+1,0,prices,cnt,dp)));
    }
     return dp[ind][buy][cnt]=profit;
}
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
         vector<vector<vector<int>>> dp(n+1, vector<vector<int>>(2, vector<int>(3, -1)));
        return f(0,1,prices,0,dp);
    }
};