class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size();
        int m=s2.size();
        if(n!=m)
        return false;
        string ans(s2.begin(),s2.end());
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                swap(ans[i],ans[j]);
                if(ans==s1)
                return true;
                ans=s2;
            }
        }
        return false;
    }
};