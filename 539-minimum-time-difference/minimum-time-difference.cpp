class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
       int n=timePoints.size();
       vector<int>ans;
       int mini=INT_MAX;
       for(int i=0;i<n;i++)
       {
        int hr=stoi(timePoints[i].substr(0,2));
        int min=stoi(timePoints[i].substr(3,2));
        int l=hr*60+min;
        ans.push_back(l);
       }
     sort(ans.begin(),ans.end());
     for(int i=1;i<n;i++)
     {
        mini=min(mini,abs(ans[i]-ans[i-1]));
     }
     int ld=(ans[0]+1440)-ans[n-1];
     mini=min(mini,ld);
       return mini;
    }
};