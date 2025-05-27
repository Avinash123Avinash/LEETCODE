class Solution {
public:

int f(int ind,int k,vector<int>&arr,vector<vector<int>>&dp)
{
	// if(k==0)
	// return 1;
	if (ind == 0) {
    if (k == 0 && arr[0] == 0) return 2; // Either pick or not pick zero
    if (k == 0 || arr[0] == k) return 1;
    return 0;
}
if(dp[ind][k]!=-1)
return dp[ind][k];
	int notpick=f(ind-1,k,arr,dp);
	int pick=0;
	if(arr[ind]<=k)
	pick=f(ind-1,k-arr[ind],arr,dp);
	// here count the total no of the subdet that equal to the target
	return dp[ind][k]=(pick+notpick);

}
int countPartitions(int n, int d, vector<int> &arr) {
    // Write your
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    if(sum<d || (sum-d)%2!=0)
    return 0;
    int k=(sum-d)/2;
    vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
    return f(n-1,k,arr,dp);
}



    int findTargetSumWays(vector<int>& nums, int target) {
        return countPartitions(nums.size(),target,nums);
    }
};