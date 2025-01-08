class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans1(nums.begin(),nums.end());
        sort(ans1.begin(),ans1.end());
        // int i=0;
        // int j=n-1;
        // for(int i=0;i<n;i++)
        // {
        //     j=n-1;
        //     while(i<j)
        //     {
        //         if(nums[i]>nums[j])
        //         swap(nums[i],nums[j]);
        //         j--;
        //     }
           
        // }
        //  if(nums==ans)
        //     return true;
        // return false;
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            // ans=nums;
            for(int j=0;j<n;j++)
            {
                ans[j]=nums[(j+i)%n];
            }
           if(ans1==ans)
           return true;
        }
        return false;
    }
};