class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n)
        {
           k=k%n;
        }
        vector<int>ans(n,0);
        stack<int>st;
       for(int i=0;i<k;i++)
       {
        st.push(nums[n-1-i]);
       }
    //    while(!st.empty())
    //    {
    //     ans.push_back(st.top());
    //     st.pop();
    //    }
    for(int i=0;i<k;i++)
    {
        ans[i]=st.top();
        st.pop();
    }
       for(int i=k;i<n;i++)
       {
        ans[i]=nums[i-k];
       }
       for(int i=0;i<n;i++)
       {
        nums[i]=ans[i];
       }
    }
};