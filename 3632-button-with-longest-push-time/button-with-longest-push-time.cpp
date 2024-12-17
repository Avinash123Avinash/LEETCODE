class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int n=events.size();
        // sort(events.begin(),events.end());
        map<int,int>mpp;
        mpp[events[0][0]]=events[0][1];
        for(int i=1;i<n;i++)
        {
            if(mpp.find(events[i][0])!=mpp.end())
            {
                 mpp[events[i][0]]=max(events[i][1]-events[i-1][1],mpp[events[i][0]]);
                 cout<<mpp[events[i][0]];
            }
            else
            mpp[events[i][0]]=events[i][1]-events[i-1][1];

        }
        int maxi=INT_MIN;
        for(auto it:mpp)
        {
            maxi=max(maxi,it.second);
        }
        for(auto it:mpp)
        {
            if(it.second==maxi)
            return it.first;
        }
        return -1;
    }
};