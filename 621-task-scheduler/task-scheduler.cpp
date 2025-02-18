class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int m=tasks.size();
        // here we use freq array for storing the character
       int freq[26]={0};
       for(int i=0;i<m;i++)
       {
        freq[tasks[i]-'A']++;
       }
    //    here we store most frquent element on the top
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
        // here we push the unique element in the temp for n group keliye
        for(int i=1;i<=n+1;i++)
        {
            // here we reduces the freq of each elemnt by one because it utilizethe one element from it
            if(!pq.empty())
            {
                int fre=pq.top();
                pq.pop();
                fre--;
                temp.push_back(fre);
            }
        }
//  here we store the  fre of the element if frq is not zero
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