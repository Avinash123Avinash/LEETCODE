class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>mpp;
        int n=deck.size();
        if(n==1)
        return false;
        for(int i=0;i<n;i++)
        {
            mpp[deck[i]]++;
        }
      vector<int>ans(n);
      for(auto it:mpp)
      {
        ans.push_back(it.second);
      }
      sort(ans.begin(),ans.end());
      int m=ans.size();
      int maxi=ans[m-1];
      for(int i=2;i<=maxi;i++)
      {
        int cnt=0;
        for(int j=0;j<m;j++)
        {
            if(ans[j]%i==0)
            cnt++;
        }
        if(cnt==m)
        return true;
      }
      return false;
    }
};