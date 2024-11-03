class Solution {
public:
    bool rotateString(string s1, string s2) {
        int n1=s1.length();
        int n2 = s2.length();
        if(n1!=n2)
        return false;
        for(int i=0;i<n2;i++)
        {
            if(s1.substr(i,n2)==s2)
            return true;
            s1+=s1[i];
        }
        return false;
    }
};