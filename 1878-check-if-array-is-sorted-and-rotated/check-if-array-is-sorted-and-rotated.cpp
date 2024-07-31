class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        int k=0;
        for(int i=1;i<n;i++)
        {
           if(nums[i]<nums[i-1])
           {
             k=i;
            break;
           }
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=nums[(i+k)%n];
        }
        for(int i=1;i<n;i++)
        {
            if(ans[i]<ans[i-1])
            return false;
        }
        return true;
    }
};