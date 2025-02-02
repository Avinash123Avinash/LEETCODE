class Solution {
public:
  int SubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int s=0;
        int e=0;
        int cnt=0;
        int sum=0;
        for(int e=0;e<n;e++)
        {
            sum+=nums[e];
            while(s<=e and sum>goal)
            {
                sum-=nums[s];
                s++;
            }
           cnt+=e-s+1;
        }
        return cnt;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal) {
         return SubarraysWithSum(nums,goal)-SubarraysWithSum(nums,goal-1);
    }
    
    //     map<int,int>mpp;
    //     mpp[0]=1;
    //     int sum=0;
    //     int cnt=0;
    //     for(int i=0;i<n;i++)
    //     {
    //         sum+=nums[i];
    //         int k=sum-goal;
    //         if(mpp.find(k)!=mpp.end())
    //         {
    //             cnt+=mpp[k];
    //         }
    //         mpp[sum]++;
    //     }
    //     return cnt;
    // }
};