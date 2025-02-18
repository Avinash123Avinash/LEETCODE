class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int m=tasks.size();
       int freq[26]={0};
       for(int i=0;i<m;i++)
       {
        freq[tasks[i]-'A']++;
       }
       priority_queue<int>pq;
       for(int i=0;i<26;i++)
       {
        if(freq[i]>0)
        {
            pq.push(freq[i]);
        }
       }
       int cnt=0;
       while(!pq.empty())
       {
        vector<int>temp;
        for(int i=1;i<=n+1;i++)
        {
            if(!pq.empty())
            {
                int fre=pq.top();
                pq.pop();
                fre--;
                temp.push_back(fre);
            }
        }

        for(auto it:temp)
        {
            if(it>0)
            pq.push(it);
        }
        if(pq.empty())
        {
            cnt+=temp.size();
        }
        else
        {
            cnt+=n+1;
        }
       }
       return cnt;
    }
};