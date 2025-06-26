class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>mpp;
        int n=nums2.size();
        for(int i=0;i<n;i++)
        {
            mpp[nums2[i]]=i;
        }
        int flag;
        for(int i=0;i<nums1.size();i++)
        {
            int k=mpp[nums1[i]];
            int l=nums1[i];
            flag=0;
            for(int j=k+1;j<n;j++)
            {
                if(nums2[j]>l)
                {
                    ans.push_back(nums2[j]);
                    flag=1;
                    break;
                }
            }
            if(!flag)
            ans.push_back(-1);
        }
        return ans;
    }
};