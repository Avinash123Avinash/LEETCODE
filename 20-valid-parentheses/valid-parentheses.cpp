class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>st;

        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            } 
            else {
                if (st.size() == 0)
                    return false;
                    char ch=st.top();
                   
                if ((s[i] == ')' and ch == '(') ||
                    (s[i] == '}' and ch == '{') ||
                    (s[i] == ']' and ch == '[')) 
                    {
                            st.pop();
                    }
                 else
                    return false;
            }
        }

        return st.empty();
    }
};