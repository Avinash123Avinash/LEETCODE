class Solution {
public:
    // int f(int ind, int prev, vector<int>& nums, int n,
    //       vector<vector<int>>& dp) {
    //     if (ind == n)
    //         return 0;
    //     if (prev!=-1 and dp[ind][prev] != -1)
    //         return dp[ind][prev];
    //     int take = 0;
    //     if (prev == -1 || nums[ind] > nums[prev])
    //         take = 1 + f(ind + 1, ind, nums, n, dp);

    //     int skip = f(ind + 1, prev, nums, n, dp);
    //         if(prev!=-1)
    //         dp[ind][prev] = max(take, skip);
    //     return  max(take, skip);
    // }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        vector<int>dp(n,1);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {

                if(nums[j]<nums[i])
                dp[i]=max((1+dp[j]),dp[i]);
            }
        }
        int maxi=0;
       for(int i=0;i<n;i++)
       {
        maxi=max(maxi,dp[i]);
       }
       return maxi;
    }
};