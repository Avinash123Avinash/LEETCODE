class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    vector<string>ans;
    int n=heights.size();
    // map<int,int>mpp;
    priority_queue<pair<int,int>>pq;
   for(int i=0;i<n;i++)
   {
    //  mpp[heights[i]]=i;
     pq.push({heights[i],i});
   }

   while(!pq.empty())
   {
    
    ans.push_back(names[pq.top().second]);
    pq.pop();
   }
    return ans;
    }
};