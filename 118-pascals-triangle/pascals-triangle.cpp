class Solution {
public:
    vector<vector<int>> generate(int n) {
        if(n==1)
        return {{1}};
        vector<vector<int>>ans(n);
        vector<int>temp;
        
        int prev;
        int cur;
        int k;
        for(int i=0;i<n;i++)
        { 
            ans[i].resize(i+1);
            // prev=i-1;
            // k=0;
            ans[i][0]=1;
            ans[i][i]=1;
            // temp.push_back(1);
            for(int j=1;j<i;j++)
            {
                // cur=j;
                ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
                // temp.push_back(k);
            }
            // temp.push_back(1);
            // ans.push_back(temp);
            // temp.clear();
        }
        return ans;
    }
};