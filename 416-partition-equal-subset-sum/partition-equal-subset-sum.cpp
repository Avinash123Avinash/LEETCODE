class Solution {
public:
bool f(int ind,int k,vector<int>&nums,vector<vector<int>>&dp)
{
    if(k==0) return true;
    if(ind==0) return nums[0]==k;
    if(dp[ind][k]!=-1)
    return dp[ind][k];
      bool taken =false;
      
    if(nums[ind]<=k)
     taken = f(ind-1,k-nums[ind],nums,dp);
     bool nottaken=f(ind-1,k,nums,dp);
     return dp[ind][k]= taken||nottaken;
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int l=sum/2;
        vector<vector<int>>dp(n+1,vector<int>(l+1,-1));
      return sum%2!=0?false:f(n-1,sum/2,nums,dp);
        
    }
};