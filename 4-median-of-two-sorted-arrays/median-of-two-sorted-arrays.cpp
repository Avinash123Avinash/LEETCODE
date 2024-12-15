class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int i=0;
        int j=0;
        while(i<nums1.size() and j<nums2.size())
        {
            if(nums1[i]<nums2[j])ans.push_back(nums1[i++]);
            else
            ans.push_back(nums2[j++]);
        }
        while(i<nums1.size())
        {
            ans.push_back(nums1[i++]);
        }
         while(j<nums2.size())
        {
            ans.push_back(nums2[j++]);
        }
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