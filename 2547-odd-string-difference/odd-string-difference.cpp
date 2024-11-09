class Solution {
public:
    string oddString(vector<string>& words) {
        // map<pair<int,int>,int>mpp;
        int n=words.size();
        int m=words[0].size();
        vector<vector<int>>ans(n,vector<int>(m-1));
        for(int i=0;i<n;i++)
        { 
            for(int j=1;j<m;j++)
            {
               ans[i][j-1]=('a'+words[i][j])-('a'+words[i][j-1]); 
            }
        }
        map<vector<int>,int>mpp;
        for(auto it:ans)
        {
            mpp[it]++;
        }
        vector<int>temp;
        for(auto it:mpp)
        {
            if(it.second==1)
            {
                for(int i=0;i<n;i++)
               {
                if(ans[i]==it.first)
                return words[i];
               }
            }
        }
    
        return "";
       
    }
};