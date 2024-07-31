class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xo = 0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            xo=xo^nums[i];
        }
        return xo;
    }
};