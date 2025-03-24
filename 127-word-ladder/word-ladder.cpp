class Solution {
public:
    int ladderLength(string begin, string end, vector<string>& arr) {
        // use the set insted of the map for erase the element easily
        unordered_set<string>mpp(arr.begin(),arr.end());
        int n=arr.size();
        if(mpp.find(end)==mpp.end())
        return 0;

        queue<pair<string,int>>q;
        q.push({begin,1});
        // mpp.erase(begin);
        while(!q.empty() )
        {
            auto [word,step]=q.front();
            q.pop();
            if(word==end)
            return step;
            
            for(int i=0;i<word.size();i++)
            {
                char org=word[i];
                for( char ch='a';ch<='z';ch++)
                {
                     if(ch==org)
                     continue;
                     word[i]=ch;
                     if(mpp.find(word)!=mpp.end())
                     {
                        q.push({word,step+1});
                        mpp.erase(word);
                     }
                }
                word[i]=org;
            }
        }
return 0;
    }
};