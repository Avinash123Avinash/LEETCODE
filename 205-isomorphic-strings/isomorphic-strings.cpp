class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.length();
        int m=t.length();
        if(n!=m)
        return false;
        map<char,char>mpp1;
        map<char,char>mpp2;
        for(int i=0;i<n;i++)
        {
          if(mpp1.find(s[i])!=mpp1.end())
          {
            if(mpp1[s[i]]!=t[i])
            return false;
          }
          else
          {
            mpp1[s[i]]=t[i];
          }

          if(mpp2.find(t[i])!=mpp2.end())
          {
            if(mpp2[t[i]]!=s[i])return false;
          }
          else
          {
            mpp2[t[i]]=s[i];
          }
        }
        return true;
    
    }
};