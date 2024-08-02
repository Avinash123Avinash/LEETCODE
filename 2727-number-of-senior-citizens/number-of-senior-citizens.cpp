class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        string ans;
        vector<int>result;
        for(int i=0;i<n;i++)
        {
            ans="";
            for(int j=11;j<13;j++)
            {
                ans+=details[i][j];
            }
            int num=stoi(ans);
            result.push_back(num);
        }
        int cnt=0;
        for(int i=0;i<result.size();i++)
        {
        if(result[i]>60)
        cnt++;
        }
        return cnt;
    }
};