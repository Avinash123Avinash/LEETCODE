class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int maxi=INT_MIN;
        int maxcnt=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(maxi,nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==maxi)
            
            {
                cnt++;
                maxcnt=max(maxcnt,cnt);
            }
            else
              cnt=0;
            
        }
        return maxcnt;
    }
};