class Solution {
public:
    string triangleType(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int flag=0;
        if(nums[0]+nums[1]>nums[2])
        flag=1;
        int n=nums.size();
        if(flag==0)
        return "none";
        map<int,int>mpp;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
          mpp[nums[i]]++;
          maxi=max(maxi,mpp[nums[i]]);
        }
        if(maxi==3 and flag==1)
        return "equilateral";
        if(maxi==2 and flag==1)
        return "isosceles";
      return "scalene";
    }
};