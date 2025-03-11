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
            // here is the condition and calculation part
          mpp[s[j]]++;
        //   here is the elimination part
          while(i<=j and mpp.size()>k)
          {
            mpp[s[i]]--;
            if(mpp[s[i]]==0)
            mpp.erase(s[i]);
            i++;
          }
        //   here is the final calculation part
          cnt+=j-i+1;
          j++;
        }
        return cnt;
    }
    int numberOfSubstrings(string s) {
     return solve(s,3)-solve(s,2);
    }
};