class Solution {
public:
    int minimumRightShifts(vector<int>& nums) {
        int n=nums.size();
        int cnt=-1;
        vector<int>ans=nums;
        sort(ans.begin(),ans.end());
        vector<int>temp(nums.begin(),nums.end());

        for(int i=0;i<n;i++)
        {
            if(temp==ans)
            return i;
            for(int j=0;j<n;j++)
            {
               temp[(j+1)%n]=nums[j];
            
            }
            nums=temp;
        }
        return -1;
    }
};