class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int mini=0;
        long long total=0;
        for(int i=0;i<n;i++)
        {
            maxi=nums[i];
            mini=nums[i];
            for(int j=i;j<n;j++)
            {
                maxi=max(maxi,nums[j]);
                mini=min(mini,nums[j]);
                total+=maxi-mini;
            }
        }
        return total;
    }
};