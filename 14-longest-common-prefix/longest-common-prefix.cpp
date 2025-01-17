class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string ans="";
        int n=v.size();
        int flag;
        int cnt=0;
        for(int i=0;i<v[0].size();i++)
        {
            char c=v[0][i];
            flag=1;
            for(int j=0;j<n;j++)
            {
                if(i>=v[j].size())
                {
                    flag=0;
                    break;
                }
                if(c!=v[j][i])
                {
                    flag=0;
                    break;
                }
            }
            if(flag)
            ans+=c;
            else
            break;
        }
        return ans;

    }
};