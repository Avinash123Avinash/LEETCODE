class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n=nums.size();
    vector<int>diff(n,0);
    for(auto it:queries)
    {
        int l=it[0];
        int r=it[1];
        diff[l]+=1;
        if(r+1<n)
        diff[r+1]-=1;
    }
    vector<int>sum(n+1);
    sum[0]=diff[0];
    for(int i=1;i<n;i++)
    {
       sum[i]=sum[i-1]+diff[i];
    }
    for(int i=0;i<n;i++)
    {
        nums[i]=nums[i]-sum[i];
        if(nums[i]>0)
        return false;
    }
    return true;
            
    }
};