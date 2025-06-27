class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,-1);
        stack<int>st;
        // st.push(0);
        for(int i=0;i<2*n;i++)
        {
            int k=nums[i%n];
            while(!st.empty() and k>nums[st.top()])
            {
               ans[st.top()]=k;
                st.pop();
            }
            st.push(i%n);
        }
        return ans;
    }
};