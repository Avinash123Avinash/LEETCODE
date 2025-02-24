class Solution {
public:
    string findValidPair(string s) {
        int n = s.size();
        map<char, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[s[i]]++;
        }
        string ans="";
      for(int i=0;i<n;i++)
      {
        string t=s.substr(i,2);
        if(mpp[t[0]]==t[0]-'0' and mpp[t[1]]==t[1]-'0' and t[0]!=t[1])
        {
            ans=t;
            return ans;
        }
      }

        return ans;
    }
};