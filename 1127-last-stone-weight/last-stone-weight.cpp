class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        if(n==1)
        return stones[0];
        priority_queue<int>q;
        for(int i=0;i<n;i++)
        {
            q.push(stones[i]);
        }
        while(q.size()>1)
       {
        int y=q.top();
        q.pop();
        int x=q.top();
        q.pop();
        if(y!=x)
        {
          q.push((y-x));
        }
        else if(y==x)
        {
            q.push(0);
        }
       }
       return q.top();
    }
};