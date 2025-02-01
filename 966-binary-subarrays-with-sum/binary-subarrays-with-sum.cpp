class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        map<int,int>mpp;
        mpp[0]=1;
        int sum=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            int k=sum-goal;
            if(mpp.find(k)!=mpp.end())
            {
                cnt+=mpp[k];
            }
            mpp[sum]++;
        }
        return cnt;
    }
};