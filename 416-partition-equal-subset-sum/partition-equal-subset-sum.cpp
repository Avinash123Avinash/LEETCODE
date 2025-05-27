class Solution {
public:
// this is the memoization technique
// bool f(int ind,int k,vector<int>&nums,vector<vector<int>>&dp)
// {
//     if(k==0) return true;
//     if(ind==0) return nums[0]==k;
//     if(dp[ind][k]!=-1)
//     return dp[ind][k];
//       bool taken =false;
      
//     if(nums[ind]<=k)
//      taken = f(ind-1,k-nums[ind],nums,dp);
//      bool nottaken=f(ind-1,k,nums,dp);
//      return dp[ind][k]= taken||nottaken;
// }
bool f(int n,int sum,vector<int>&nums)
{
    vector<vector<bool>>dp(n+1,vector<bool>(sum+1,false));
    for(int i=0;i<=n;i++)
    {
        dp[i][0]=true;
    }
    if(nums[0]==sum)
    dp[0][nums[0]]=true;
    
//   =false;
bool taken=false;
    for(int i=1;i<n+1;i++)
    {
        
        for(int j=1;j<sum+1;j++)
        {
            if(nums[i-1]<=j)
          taken =dp[i-1][j-nums[i-1]];
             bool nottaken=dp[i-1][j];
             dp[i][j]=taken||nottaken;
        }
      
    }
    return dp[n][sum];

    
}
    bool canPartition(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        int l=sum/2;
      return sum%2!=0?false:f(n,sum/2,nums);
        
    }
};