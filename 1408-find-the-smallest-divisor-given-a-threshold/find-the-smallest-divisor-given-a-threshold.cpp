class Solution {
public:
    int smallestDivisor(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int sum;
        int l=1;
        int h=nums[n-1];
        while(l<=h)
{
    int mid=(l+h)/2;
            sum=0;
            for(int j=0;j<n;j++)
            {
              if(nums[j]%mid==0)
              sum+=nums[j]/mid;
              else
              sum+=nums[j]/mid+1;
            }
            if(sum<=k)
              h=mid-1;
            else
            l=mid+1;
        }
        return l;
    }
};