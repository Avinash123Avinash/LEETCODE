class Solution {
public:
int find(vector<vector<int>>&dp,vector<int>& nums,int ind,int jump)
{
    if(ind>=nums.size()-1)
    return jump;
    if(dp[ind][jump]!=-1)
    return dp[ind][jump];
    int mini=INT_MAX;
    for(int i=1;i<=nums[ind];i++)
    {
        mini=min(mini,find(dp,nums,ind+i,jump+1));
    }
    return dp[ind][jump]=mini;
}
    int jump(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        int l=0;
        int r=0;
        // it is the condition t stop to reach at the end point
        while(r<n-1)
        {
            int far=0;
            for(int i=l;i<=r;i++)
            {
                //  pick the farthest element from all the occurence
                far=max(i+nums[i],far);   
            }
            l=r+1;
            r=far;
            cnt++;

        }
return cnt;

        

    //     int n=nums.size();
    //     int ind=0;
    //     vector<vector<int>>dp(n,vector<int>(n,-1));
    //  return   find(dp,nums,ind,cnt);
        // return cnt;


    }
};