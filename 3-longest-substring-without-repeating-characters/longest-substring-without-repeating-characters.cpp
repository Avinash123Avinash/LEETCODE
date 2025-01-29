class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int len=0;
        if(n==1)
        return 1;
        if(n==0)
        return 0;
        for(int i=0;i<n;i++)
        {
            map<char,int>mpp;
            for(int j=i;j<n;j++)
            {
                if(mpp[s[j]]==1)
                {
                    break;
                }
                 len=max(len,j-i+1);
                mpp[s[j]]++;
            }
           

        }
        return len;
    }
};