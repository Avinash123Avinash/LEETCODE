class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
           if(nums[i]==0)
           ans.push_back(0);
           else
           {
            nums[cnt]=nums[i];
            cnt++;
           }
        }
        int m=ans.size();
        for(int i=n-m;i<n;i++)
        {
            nums[i]=0;
        }
    }
};