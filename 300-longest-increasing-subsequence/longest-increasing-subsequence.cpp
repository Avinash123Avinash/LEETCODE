class Solution {
public:
int f(vector<int>&nums,int ind,int prev,int n,vector<vector<int>>&dp)
{
   
    if(ind==n)
    return 0;
    if(dp[ind][prev+1]!=-1)
    return dp[ind][prev+1];
    // not take
   int len1=0+f(nums,ind+1,prev,n,dp);
   int len2=0;
    if(prev==-1||nums[ind]>nums[prev])
    {
        len2=(1+f(nums,ind+1,ind,n,dp));
    }
    return dp[ind][prev+1]=max(len1,len2);
}
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        // int len=0;
       vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return f(nums,0,-1,n,dp);
    }
};