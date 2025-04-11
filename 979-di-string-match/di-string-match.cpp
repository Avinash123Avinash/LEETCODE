class Solution {
public:
    vector<int> diStringMatch(string s) {
        int num=0;
        stack<int>st;
        int n= s.size();
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
            st.push(num++);
            if(i==n || s[i]=='I')
            {
                while(!st.empty())
                {
                    ans.push_back(st.top());
                    st.pop();
                }
            }
        }
        return ans;

    }
};