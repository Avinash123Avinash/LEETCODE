class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>>ans(n+1,vector<int>(2));
        ans.resize(0);
     int i=0;
     while(i<n and intervals[i][1]<newInterval[0])
     {
        ans.push_back(intervals[i]);
        i++;
     }
     while(i<n and intervals[i][0]<=newInterval[1])
     {
        newInterval[0]=min(intervals[i][0],newInterval[0]);
         newInterval[1]=max(intervals[i][1],newInterval[1]);
        i++;
     }
     ans.push_back(newInterval);
     while(i<n)
     {
        ans.push_back(intervals[i]);
        i++;
     }
return ans;
        
    }
};