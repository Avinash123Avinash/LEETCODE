class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i-1]==nums[i])
            return true;
        }
        // for(auto it:mpp)
        // {
        //     if(it.second>1)
        //     return true;
        // }
        return false;
    }
};