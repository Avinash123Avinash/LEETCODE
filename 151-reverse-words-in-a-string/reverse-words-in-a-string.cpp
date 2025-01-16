class Solution {
public:
    string reverseWords(string s) {
         string ans;
        int n=s.size();
        string temp;
     stack<string>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]==' ')
            { 
                if(temp.size()>0)
                {
                st.push(temp);
                }
                temp.clear();
            }
            else
            {
                temp.push_back(s[i]);
            }
        }
        if(temp.size()>0)
        st.push(temp);
        while(!st.empty())
        {
            ans+=st.top();
            ans+=' ';
            st.pop();
        }
        ans.pop_back();
      
        return ans;

    }
};