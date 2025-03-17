class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        vector<int>vis(26,0);
        int n=s.size();
        if(s.size()!=t.size())
        return false;
        for(int i=0;i<n;i++)
        {
            int shift=(t[i]-s[i]+26)%26;
            if(shift==0)
            continue;
            int time=vis[shift]*26+shift;
            if(time>k)
            return false;
             vis[shift]++;
        }
        return true;
    }
};