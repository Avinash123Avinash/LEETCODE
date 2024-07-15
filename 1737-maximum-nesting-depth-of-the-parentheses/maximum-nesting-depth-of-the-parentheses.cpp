class Solution {
public:
    int maxDepth(string s) {
         int cnt=0;
         int maxi=0;
         int n=s.size();
         for(int i=0;i<n;i++)
         {
            if(s[i]=='(')
            {
              cnt+=1;
              maxi=max(maxi,cnt);
            }
          else if(s[i]==')')
          {
            cnt-=1;
          }
    }
    return maxi;
    }
};