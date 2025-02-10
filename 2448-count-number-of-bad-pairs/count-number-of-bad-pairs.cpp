class Solution {
public:
#define ll long long
    long long countBadPairs(vector<int>& nums) {
        // int n=nums.size();
        // ll cnt=0;
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=i+1;j<n;j++)
        //     {
        //         if(j-i!=nums[j]-nums[i])
        //         cnt++;
        //     }
        // }
        // return cnt;
        int n=nums.size();
        map<int,int>mpp;
        ll tcnt=1ll*(n*1ll*(n-1))/2;
        ll cnt=0;
        for(int i=0;i<n;i++)
        {
            int k=nums[i]-i;

            if(mpp.find(k)!=mpp.end())
            {
                cnt+=mpp[k];
            }
            mpp[k]++;
        }
        return tcnt-cnt;
    }
};