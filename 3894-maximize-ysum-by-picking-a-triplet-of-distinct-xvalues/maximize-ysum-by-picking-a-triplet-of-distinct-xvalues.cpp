class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        map<int,int>mpp;
        int n=x.size();
        mpp[x[0]]=y[0];
        for(int i=1;i<n;i++)
            {
                if(mpp.find(x[i])!=mpp.end())
                {
                    if(y[i]>mpp[x[i]])
                        mpp[x[i]]=y[i];
                }
                else
                    mpp[x[i]]=y[i];
            }
        if(mpp.size()<3)
            return -1;
       
        vector<int>ans;
        for(auto it:mpp)
            {
                 ans.push_back(it.second);  
            }
        sort(ans.begin(),ans.end());
        reverse(ans.begin(),ans.end());
        int m=ans.size();
         int sum=0;
        for(int i=0;i<3;i++)
            {
                sum+=ans[i];
            }
        return sum;
    }
};