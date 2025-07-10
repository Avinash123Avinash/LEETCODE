class Solution {
public:
    bool isvalid(string& temp) {
        stack<char> st;
        for (int i = 0; i < temp.size(); i++) {

            if (!st.empty() and st.top()=='(' and temp[i]==')')
                st.pop();
            else
                st.push(temp[i]);
        }

        return st.size() != 0 ? false : true;
    }
    void f(int n, string& temp, vector<string>& ans) {
        if (temp.size() == 2 * n) {
            if (isvalid(temp))
                ans.push_back(temp);

            return;
        }

        temp.push_back('(');
        f(n, temp, ans);
        temp.pop_back();

        temp.push_back(')');
        f(n, temp, ans);
        temp.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        f(n, temp, ans);
        return ans;
    }
};