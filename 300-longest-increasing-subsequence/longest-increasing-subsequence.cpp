class Solution {
public:
    // int f(vector<int>& nums, int ind, int prev, int n,
    //       vector<vector<int>>& dp) {

    //     if (ind == n)
    //         return 0;
    //     if (dp[ind][prev + 1] != -1)
    //         return dp[ind][prev + 1];
    //     // not take
    //     int len1 = 0 + f(nums, ind + 1, prev, n, dp);
    //     int len2 = 0;
    //     if (prev == -1 || nums[ind] > nums[prev]) {
    //         len2 = (1 + f(nums, ind + 1, ind, n, dp));
    //     }
    //     return dp[ind][prev + 1] = max(len1, len2);
    // }
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        // int len=0;
        int maxi=INT_MIN;
     vector<int>dp(n,1);
     for(int ind=0;ind<n;ind++)
     {
        for(int prev=0;prev<ind;prev++)
        {
            if(nums[ind]>nums[prev])
            dp[ind]=max(dp[prev]+1,dp[ind]);
        }
        maxi=max(maxi,dp[ind]);
     }
     return maxi;
    }
};