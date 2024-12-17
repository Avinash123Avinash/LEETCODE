class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int n=events.size();
        // sort(events.begin(),events.end());
      int temp=0;
      int maxi=INT_MIN;
      int ans=-1;
      for(int i=0;i<n;i++)
      {
        if(i==0)
        temp=events[i][1];
        else
        temp=events[i][1]-events[i-1][1];

        if(temp>maxi || (temp==maxi and events[i][0]<ans) )
        {
            maxi=temp;
            ans=events[i][0];
        }
      }
      return ans;
    }
};