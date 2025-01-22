class Solution {
public:
    string frequencySort(string s) {
        int n=s.size();
        map<char,int>mpp;
        priority_queue<pair<int,char>>q;
        string ans;
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
        }
        for(auto it:mpp)
        {
            q.push({it.second,it.first});
        }
        while(!q.empty())
        {
            int m=q.top().first;
            char ch=q.top().second;
            for(int i=0;i<m;i++)
            {
                ans+=ch;
            }
            q.pop();
        }
        return ans;
    }
};