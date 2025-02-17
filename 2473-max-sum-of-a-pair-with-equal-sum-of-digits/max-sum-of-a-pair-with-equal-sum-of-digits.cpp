class Solution {
public:
    int maximumSum(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int maxi=-1;
      int n=nums.size();
      map<int,int>mpp;
      for(int i=0;i<n;i++)
      {
        int sum=0;
        int n=nums[i];
        while(n!=0)
        {
            int r=n%10;
            sum+=r;
            n=n/10;
        }
        if(mpp.find(sum)!=mpp.end())
        {
            maxi=max(maxi,(nums[i]+mpp[sum]));
        }
        mpp[sum]=nums[i];
      }
      return maxi;
    }
};