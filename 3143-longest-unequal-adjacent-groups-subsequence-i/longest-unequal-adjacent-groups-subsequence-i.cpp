class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string>ans;
        map<string,int>mpp;
        int n=words.size();
        for(int i=0;i<words.size();i++)
        {
            mpp[words[i]]=i;
        }
        ans.push_back(words[0]);
         for(int i=1;i<n;i++)
         {
            if(groups[mpp[ans.back()]]!=groups[i])
            ans.push_back(words[i]);
         }
         return ans;
    }
};