class Solution {
public:
    int minAddToMakeValid(string s) {
        // stack<char> st;
        // st.push(s[0]);
        // for (int i = 1; i < s.size(); i++) {
        //     here we check that the top of the stack has '(' and s[i] is ')' then pop
        //     // occured otherwise not produce the valid parenthesis
        //     if (st.size()!=0 and s[i] == ')' and st.top()=='(') {
        //         st.pop();
        //     }
        //      else {
        //         st.push(s[i]);
        //     }
        // }
        // return st.size();
        int open=0;
        int minadd=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
            open++;
            }
            else
            {
                // here if open exist then it cancel with the close 
                // and if not exist then add to required brackets
                open>0?open--:minadd++;
            }
        }
        return open+minadd;
    }
};