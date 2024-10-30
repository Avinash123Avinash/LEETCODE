class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mpp;
        int cnt=0;
        set<pair<int,int>>st;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            int l=nums[i]-k;
            if(k==0)
            {
                if(mpp[l]>1 )
                st.insert({nums[i],l});
                mpp[l]--;
                
            }
            if(mpp.find(l)!=mpp.end() and mpp[l]>0 and k!=0 )
            {
                 st.insert({nums[i],l});
                mpp[l]--;
                // mpp[nums[i]]--;
            }
        }
        return st.size();
    }
};