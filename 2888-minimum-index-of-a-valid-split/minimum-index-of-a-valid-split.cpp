class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mpp;
        map<int,int>mpp1;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        int dom=0;
        for(auto it:mpp)
        {
            if(it.second>(n/2))
            dom=it.first;
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==dom)
            sum++;
            mpp1[i]=sum;
        }
        for(int i=0;i<n;i++)
        {
            if(mpp1[i]*2>i+1 and (mpp1[n-1]-mpp1[i])*2>n-1-i)
            return i;
        }
         return -1;
    }
};