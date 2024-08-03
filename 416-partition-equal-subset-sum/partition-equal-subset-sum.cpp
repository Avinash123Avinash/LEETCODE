class Solution {
public:
bool isSubsetsum(vector<int>&nums,int sum,int n)
{
    int dp[n+1][sum+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<sum+1;j++)
        {
            if(i==0)
            dp[i][j]=false;
            if(j==0)
            dp[i][j]=true;
        }
    }
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<sum+1;j++)
        {
            if(nums[i-1]<=j)
            dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
            else
            dp[i][j]=dp[i-1][j];
        }
    }
    return dp[n][sum];
}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        if(n==1)
        return false;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        if(sum%2!=0)
        return false;
        else
          return isSubsetsum(nums,sum/2,n);
    }
};