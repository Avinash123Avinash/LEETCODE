class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       int n=nums1.size();
       int m=nums2.size();
    //    if(m==1)
    //    return {-1};
       vector<int>index;
       for(int i=0;i<n;i++)
       {
        for(int j=0;j<m;j++)
        {
            if(nums1[i]==nums2[j])
            index.push_back(j);
        }
       }
       vector<int>ans;
       int flag;
       for(int i=0;i<n;i++)
       {
        int k=index[i];
        for(int j=k;j<m;j++)
        {
            flag=0;
            if(k==m)
            ans.push_back(-1);
            else if(nums2[k]<nums2[j])
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