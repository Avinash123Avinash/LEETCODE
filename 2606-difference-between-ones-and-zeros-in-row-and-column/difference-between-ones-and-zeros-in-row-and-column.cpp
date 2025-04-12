class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
         int n=grid.size();
        int m=grid[0].size();
        vector<int>onesRowi(n,0);
        vector<int>zerosRowi(n,0);
          vector<int>onesColj(m,0);
            vector<int>zerosColj(m,0);
       
        int cnt1;
        int cnt0;
        for(int i=0;i<n;i++)
        {
            cnt1=0;
            cnt0=0;
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                cnt1++;
                else
                cnt0++;
            }
            onesRowi[i]=(cnt1);
            zerosRowi[i]=(cnt0);
        }

          for(int i=0;i<m;i++)
        {
            cnt1=0;
            cnt0=0;
            for(int j=0;j<n;j++)
            {
                if(grid[j][i]==1)
                cnt1++;
                else
                cnt0++;
            }
            onesColj[i]=(cnt1);
          zerosColj[i]=(cnt0);
        }
        //   for(int i=0;i<3;i++)
        // {
        //     // cout<<onesRowi[i]<<endl;
        //     // cout<<onesColj[i]<<endl;
        //     // cout<<zerosRowi[i]<<endl;
        //     cout<<zerosColj[i]<<endl;
        // }
        vector<vector<int>>ans(n,vector<int>(m,0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
              ans[i][j]=onesRowi[i]+onesColj[j]- zerosRowi[i]-zerosColj[j];
            }
        }
        return ans;
    }
};