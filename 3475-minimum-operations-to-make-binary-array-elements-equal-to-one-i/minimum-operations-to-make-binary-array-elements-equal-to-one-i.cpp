class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                cnt++;
                for(int j=i;j<i+3;j++)
                {
                    if(n-i<3)
                    {
                        return -1;
                        break;
                    }
                    if(nums[j]==0)
                        nums[j]=1;
                    else
                        nums[j]=0;
                }
            }
        }
        return cnt;
    }
};