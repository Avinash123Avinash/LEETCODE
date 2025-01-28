class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        st.push(s[0]);
        int flag = 0;
        for (int i = 1; i < s.size(); i++) {
            if (st.size()!=0 and s[i] == ')' and st.top()=='(') {
                st.pop();
                // flag = 0;
            }
             else {
                
                st.push(s[i]);
            }
        }
        return st.size();
    }
};