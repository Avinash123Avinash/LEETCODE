class Solution {
public:
vector<string>ans;
void generate(string& s,int open ,int closed)
{
    if(closed==0 and open==0)
    {
        ans.push_back(s);
        return;
    }
    if(open>0)
    {
        s.push_back('(');
        generate(s,open-1,closed);
        s.pop_back();
    }
    if(closed>0)
    {
        if(open<closed)
        {
            s.push_back(')');
            generate(s,open,closed-1);
            s.pop_back();
        }
    }
}
    vector<string> generateParenthesis(int n) {
         string s;
         int open=n;
         int closed=n;
         generate(s,open,closed);
           return ans;
    }
};