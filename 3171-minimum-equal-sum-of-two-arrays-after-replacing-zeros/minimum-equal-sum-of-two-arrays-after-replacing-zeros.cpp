class Solution {
public:
    long long minSum(vector<int>& nums1, vector<int>& nums2) {
        long long sum1=0;
        long long sum2=0;
        long long cnt1=0;
        long long cnt2=0;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++)
        {
            sum1+=nums1[i];
            if(nums1[i]==0)
            cnt1++;
        }
        for(int i=0;i<m;i++)
        {
            sum2+=nums2[i];
            if(nums2[i]==0)
            cnt2++;
        }
        // if both array have zeros
        if(cnt1>0 and cnt2>0 )
        {
            return max(sum1+cnt1,sum2+cnt2);
        }
        // if one have zeros
        // first for num1
        if(cnt1>0)
        {
            if(sum1+cnt1<=sum2)
        return sum2;
        return -1;
        }
        if(cnt2>0)
        {
            if(sum1>sum2+cnt2)
            return sum1;
            return -1;
        }
      return sum1==sum2?sum1:-1;
    }
};