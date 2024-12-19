class Solution {
public:
bool palindrome(int i,int j, string &s)
{
    int n=s.size();
    // int i=0;
    // int j=n-1;
    while(i<=j)
    {
        if(s[i]!=s[j])
        return false;
        i++;
        j--;
    }
    return true;
}
void partition(int pos,string&s,vector<string>&temp,vector<vector<string>>&ans)
{
if(pos==s.size())
{
ans.push_back(temp);
return;
}
for(int i=pos;i<s.size();i++)
{
    if(palindrome(pos,i,s))
    {
    temp.push_back(s.substr(pos,i-pos+1));
   partition(i+1,s,temp,ans);
   temp.pop_back();
    }
}
}

    vector<vector<string>> partition(string s) {
        int n=s.size();
        vector<vector<string>>ans;
        vector<string>temp;
        partition(0,s,temp,ans);
        return ans;
    }
};