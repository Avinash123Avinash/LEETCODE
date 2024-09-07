class Solution {
public:
// int f(int i,vector<int>&nums,int n)
// {
//     if(i>=n)
//     return 0;
//     int maxi=INT_MIN;
//      int cost=0;
//     for(int ind=i;ind<n;ind++)
//     {
//          cost=nums[ind]+f(i+1,nums,n);
//         maxi=max(maxi,cost);
//     }
//     return maxi;
// }
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int cs=nums[0];
        int ms=nums[0];
        for(int i=1;i<n;i++)
        {
            cs=max(nums[i],cs+nums[i]);
            ms=max(ms,cs);
        }
        return ms;
    }
};