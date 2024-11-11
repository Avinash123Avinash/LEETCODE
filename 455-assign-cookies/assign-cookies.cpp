class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
      sort(g.begin(),g.end());
      sort(s.begin(),s.end());
      int n=g.size();
      int m=s.size();
     
      vector<int>vis(m,0);
      int i=0;
      int j=0;
      int cnt=0;
      while(i<n and j<m)
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