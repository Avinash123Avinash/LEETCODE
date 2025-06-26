class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        map<int,int>mpp;
        int n=nums2.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
           while(!st.empty() and nums2[i]>st.top())
           {
            mpp[st.top()]=nums2[i];
            st.pop();
           }
           st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            if(mpp.find(nums1[i])!=mpp.end())
            ans.push_back(mpp[nums1[i]]);
            else
            ans.push_back(-1);
        }
        return ans;
    }
};