class Solution {
public:
 static bool comp(string&s1,string&s2)
{
    return s1.size()<s2.size();
}
bool check(string& s1,string& s2)
{
    if(s1.size()==s2.size())
    return false;
    int i=0;
    int j=0;
    int cnt=0;
    while(i<s1.size() )
    {
        if(j<s2.size() and s1[i]==s2[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            cnt++;
        }
    }
    if(cnt==1)
    return true;
    return false;
}

    int longestStrChain(vector<string>& words) {
         
            sort(words.begin(),words.end(),comp);
         int n = words.size();
        // int len=0;
        int maxi=INT_MIN;
     
     vector<int>dp(n,1);
     for(int ind=0;ind<n;ind++)
     {
        for(int prev=0;prev<ind;prev++)
        {
            if(check(words[ind],words[prev]) and 1+dp[prev]>dp[ind])
            dp[ind]=1+dp[prev];
        }
        maxi=max(maxi,dp[ind]);
     }
     return maxi;
    }
};