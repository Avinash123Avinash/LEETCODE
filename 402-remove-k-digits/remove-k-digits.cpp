class Solution {
public:
    string removeKdigits(string num, int k) {
       int n=num.size();
       stack<char>st;
       for(int i=0;i<n;i++)
       {
        while(!st.empty() and k>0 and (st.top()-'0')>(num[i]-'0'))
        {
            k--;
            st.pop();
        }
        st.push(num[i]);
       }
       string ans;
       while(k>0)
       {
        st.pop();
        k--;
       }
       while(!st.empty())
       {
         ans.push_back(st.top());
         st.pop();
        }
        while(ans.size()!=0 and ans.back()=='0')
        {
            ans.pop_back();
        }
       reverse(ans.begin(),ans.end());
       if(ans.size()==0)
         return "0";
        return ans;
    }
};