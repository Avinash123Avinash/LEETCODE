class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int poscnt=0;
        int negcnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]>0)
            poscnt++;
            else if(nums[i]<0)
            negcnt++;
        }
        int maxi=max(poscnt,negcnt);
        return maxi;
    }
};