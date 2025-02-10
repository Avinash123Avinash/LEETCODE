class Solution {
public:
    string clearDigits(string s) {
        int n=s.size();
        stack<int>st;
        string ans;
        for(int i=0;i<n;i++)
        {
            if(isdigit(s[i]) and st.size()!=0)
            {
               st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        while(!st.empty())
        {
           ans.push_back(st.top());
           st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};