class Solution {
public:
    // int majorityElement(vector<int>& nums) {
    //     int n=nums.size();
    //     // int k=n/2;
    //     map<int,int>mpp;
    //     // for this loop the TC be O(nlog(n))
    //     for(int i=0;i<n;i++)
    //     {
    //         mpp[nums[i]]++;
    //     }
    //      // for this loop the TC be O(nlog(n))
    //     for(auto it:mpp)
    //     {
    //         if(it.second>n/2)
    //         return it.first;
    //     }
    //     return -1;
int majorityElement(vector<int>& nums) {
    sort(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]==nums[i])
            {
                cnt++;
            }
            else
            {
                if(cnt+1>n/2)
                return nums[i-1];
                else
                cnt=0;
            }
        }
        if(cnt+1>n/2)
        return nums[n-1];
        return -1;
}

    
};