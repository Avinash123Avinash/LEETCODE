class Solution {
public:
    bool isSubsequence(string s, string t) {
       int n=t.size();
       int m=s.size();
       int j=0;
       int i=0;
       while(i<n && j<m){
            if(t[i]==s[j]){
                i++;
                j++;
            }
            else{
                i++;
            }
       }
       if(j<m){
        return false;
       }
       return true;
    }
};