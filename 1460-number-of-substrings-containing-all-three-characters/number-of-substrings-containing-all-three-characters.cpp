class Solution {
public:
int solve(string s, int k)
{
       int n=s.size();
        int i=0;
        int j=0;
        int cnt=0;
        map<int,int>mpp;
        while(j<n)
        {
          mpp[s[j]]++;
          while(i<=j and mpp.size()>k)
          {
            mpp[s[i]]--;
            if(mpp[s[i]]==0)
            mpp.erase(s[i]);
            i++;
          }
          cnt+=j-i+1;
          j++;
        }
        return cnt;
    }
    int numberOfSubstrings(string s) {
     return solve(s,3)-solve(s,2);
    }
};