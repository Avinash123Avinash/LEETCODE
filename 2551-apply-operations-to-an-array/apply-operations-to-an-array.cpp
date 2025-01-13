class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==nums[i])
            {
                nums[i-1]=2*nums[i-1];
                nums[i]=0;
            }
        }
        vector<int>ans;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
            nums[cnt]=nums[i];
            cnt++;
            }
        }
        for(int i=cnt;i<n;i++)
        {
           nums[cnt]=0;
           cnt++;
        }
       
        return nums;
    }
};