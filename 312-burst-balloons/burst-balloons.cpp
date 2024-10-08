class Solution {
public:
int f(int i,int j,vector<int>&nums,vector<vector<int>>&dp)
{
    if(i>j)
    return  dp[i][j]=0;
    if(dp[i][j]!=-1)
    return dp[i][j];
    int maxi=INT_MIN;
    int cost=0;
    for(int ind=i;ind<=j;ind++)
    {
     cost=nums[i-1]*nums[ind]*nums[j+1] +f(i,ind-1,nums,dp)+f(ind+1,j,nums,dp);  
     maxi=max(maxi,cost); 
    }
    return dp[i][j]=maxi;
}
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        nums.push_back(1);
        nums.insert(nums.begin(),1);
        vector<vector<int>>dp(n+2,vector<int>(n+2,-1));
        return f(1,n,nums,dp);
    }
};