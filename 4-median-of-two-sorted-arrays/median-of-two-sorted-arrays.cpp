class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        ans.push_back(nums1[i]);
        for(int j=0;j<nums2.size();j++)
        ans.push_back(nums2[j]);
        sort(ans.begin(),ans.end());
        int n=ans.size();
        double ans1=0;
        // int f=0;
        int l=n-1;
        if(n%2!=0)
        {
            return (ans[l/2]);
        }
        else
        {
            return (double(ans[l/2]+ans[(l/2)+1])/2);
        }
    }
};