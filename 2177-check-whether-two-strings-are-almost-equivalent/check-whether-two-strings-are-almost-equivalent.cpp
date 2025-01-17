class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int n=word1.size();
        vector<int>ans1(26,0);
        vector<int>ans2(26,0);
        for(int i=0;i<n;i++)
        {
            ans1[word1[i]-'a']++;
            ans2[word2[i]-'a']++;
        }
      for(int i=0;i<26;i++)
      {
        if(abs(ans1[i]-ans2[i])>3)
        return false;
      }

        return true;

    }
};