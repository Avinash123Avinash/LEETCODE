class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n=s.size();
        int m=g.size();
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int cnt=0;
   int i=0;
   int j=0;
   while(j<n and i<m)
   {
    if(s[j]>=g[i])
    {
        cnt++;
        i++;
        j++;
    }
    else
     j++;
   }
   return cnt;

    }
};