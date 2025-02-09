class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k!=0)
        return false;
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        while(!mpp.empty())
        {
            int val=mpp.begin()->first;
            for(int i=0;i<k;i++)
            {
                if(mpp[val+i]==0)
                return false;

                mpp[val+i]--;
                if(mpp[val+i]<1)
                mpp.erase(val+i);
            }
        }
        return true;
    }
};