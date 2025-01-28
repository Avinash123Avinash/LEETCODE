class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int ls=0;
        int rs=0;
        int ts=0;
        int diff=0;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            ts+=nums[i];
        }
        for(int i=0;i<n-1;i++)
        {
            ls+=nums[i];
            rs=ts-ls;
            diff=rs-ls;
            if(diff%2==0)
            cnt++;
        }
        return cnt;
    }
};