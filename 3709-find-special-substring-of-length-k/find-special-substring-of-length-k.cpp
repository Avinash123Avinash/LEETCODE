class Solution {
public:
    bool hasSpecialSubstring(string s, int k) {
        int n=s.size();
        if(k>n)
        return false;
        for(int i=0;i<=n-k;i++)
        {
            map<char,int>mpp;
            for(int j=i;j<k+i;j++)
            {
                mpp[s[j]]++;

            }
           if(i==0 and mpp.size()==1 and s[i+k]!=s[i])
           return true;
           if(i==n-k  and mpp.size()==1 and s[i-1]!=s[i])
           return true;
           if(i!=0 and i!=n-k and mpp.size()==1 and s[i+k]!=s[i] and s[i-1]!=s[i] )
           return true;

        }
        return false;
    }
};