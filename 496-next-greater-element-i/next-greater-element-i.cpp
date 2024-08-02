class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       int n=nums1.size();
       int m=nums2.size();
    stack<int>s;
    unordered_map<int,int>mpp;
    for(int i=0;i<m;i++)
    {
        while(!s.empty() and s.top()<nums2[i])
        {
          mpp[s.top()]=nums2[i];
          s.pop();
        }
        s.push(nums2[i]);
    }
    for(int i=0;i<n;i++)
    {
        nums1[i]=mpp[nums1[i]]?mpp[nums1[i]]:-1;
    }
    return nums1;
    }
};