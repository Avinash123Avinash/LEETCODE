class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            int j=i-k;
            int l=i+k;
            if((j>=0 and nums[i]<=nums[j]) || (l<n and nums[i]<=nums[l] ))
            {
              continue;
            }
            else
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};