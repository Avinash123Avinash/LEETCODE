class Solution {
public:
// here we can use the monotonic stack because here we can maintain the order of the element in the simple one order (decreasing) which called the monotonic stacj
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n=nums2.size();
                vector<int>temp;
        stack<int>st;
        map<int,int>mpp;
        for(int i=n-1;i>=0;i--)
        {
          while(!st.empty() and st.top()<=nums2[i])
          {
            st.pop();
          }
          if(st.size()==0)
          mpp[nums2[i]]=-1;
          else
        mpp[nums2[i]]=st.top();
          st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++)
        {
            temp.push_back(mpp[nums1[i]]);
        }
        return temp;
    }
};