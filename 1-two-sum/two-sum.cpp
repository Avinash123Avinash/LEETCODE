class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            int k=target-nums[i];
            if(mpp.find(k)!=mpp.end() and mpp[k]!=i)
            return {i,mpp[k]};
        }
        return {-1};
    }
};