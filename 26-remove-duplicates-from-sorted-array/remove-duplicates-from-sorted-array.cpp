class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // return 2;
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        int i=0;
        for(auto it:mpp)
        {
            nums[i]=it.first;
            i++;
        }
        return mpp.size();

    }
};