class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n=s.size();
        int m=spaces.size();
        string ans;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
           if( cnt<m and spaces[cnt]==i )
           {
            cnt++;
            ans+=' ';
            i--;
           }
           else
           {
            ans+=s[i];
           }
        }
        return ans;
    }
};