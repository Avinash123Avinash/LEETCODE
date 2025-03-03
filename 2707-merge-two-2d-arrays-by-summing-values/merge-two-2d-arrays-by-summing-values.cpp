class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int>mpp;
        int n=nums1.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums1[i][0]]=nums1[i][1];
        }
        for(int i=0;i<nums2.size();i++)
        {
            auto it=nums2[i][0];

            if(mpp.find(it)!=mpp.end())
            {
                mpp[it]+=nums2[i][1];
            }
            else
            mpp[it]=nums2[i][1];
        }
        vector<vector<int>>ans;
        for(auto it:mpp)
        {
            vector<int>temp;
            temp.push_back(it.first);
            temp.push_back(it.second);
            ans.push_back(temp);
        }
        return ans;
    }
};