class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.size();
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            st.push(0);
            else
            {
                int val=0;
                while(st.top()!=0)
                {
                  val+=st.top();
                  st.pop();
                }
                val=max(2*val,1);
                st.pop();
                  st.push(val);
            }
        }
        int sum=0;
        while(st.size()!=0)
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};