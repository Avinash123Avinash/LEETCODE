class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n=s.size();
         string ans;
        //  ans.reserve(n);
        for(int i=0;i<n;i++)
        {
            int l=(i+k)%n;
            ans.push_back(s[l]);
        }
        return ans;
    }
};