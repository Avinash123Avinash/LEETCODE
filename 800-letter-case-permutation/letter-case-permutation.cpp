class Solution {
public:
void f(string &s,string &temp, vector<string>&ans,map<string,int>&mpp,int i)
{
    if(i==s.size())
    {
        if(mpp.find(temp)==mpp.end())
        {
            ans.push_back(temp);
            mpp[temp]++;
        }

        return;
    }
    temp.push_back(tolower(s[i]));
    f(s,temp,ans,mpp,i+1);
    temp.pop_back();
    temp.push_back(toupper(s[i]));
   f(s,temp,ans,mpp,i+1);
    temp.pop_back();
}
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string temp;
        map<string,int>mpp;
        f(s,temp,ans,mpp,0);
        return ans;
    }
};