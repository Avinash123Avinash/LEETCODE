class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        string ans;
        if (n == k)
            return "0";
    for(char dig:num)
    {
        while(!ans.empty() and k>0 and ans.back()>dig)
        {
            ans.pop_back();
            k--;
        }
        ans+=dig;
    }
    while(k>0)
    {
        ans.pop_back();
        k--;
    }
    // for check the leading zero
    int i=0;
    while( i<ans.size() and ans[i]=='0')
    {
        i++;
    }
   ans=ans.substr(i);
    return ans.empty()?"0":ans;
    }
};