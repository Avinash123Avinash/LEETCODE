class Solution {
public:
    int f(int ind, int k, vector<int>& nums,vector<vector<int>>&dp) {
       if(ind<0)
       {
        if(k==0)
        return  0;
        return  INT_MIN;
       }
       if(dp[ind][k]!=-1)
       return dp[ind][k];
        int take = INT_MIN;
        if (k>=0 and nums[ind] <= k)
            take = 1 + f(ind - 1, k - nums[ind], nums,dp);
        int nottake = f(ind - 1, k, nums,dp);
        return dp[ind][k]=max(take, nottake);
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
      f(n - 1, target, nums,dp);
        return dp[n-1][target]>0?dp[n-1][target]:-1;
    }
};