class Solution {
public:
int f(vector<int>& nums,int n,int i,vector<int>&dp)
{
    int l=0;
    int r=0;
    if(i>=n)
    return dp[n]=0;
    if(dp[i]!=-1)
    return dp[i];
    l=nums[i]+f(nums,n,i+2,dp);
    
        r=f(nums,n,i+1,dp);
        
    
    return dp[i]=max(l,r);
}
    int rob(vector<int>& nums) {
        // int cnt=0;
        int n=nums.size();
        vector<int>dp(n+1,-1);
        return f(nums,n,0,dp);
    }
};