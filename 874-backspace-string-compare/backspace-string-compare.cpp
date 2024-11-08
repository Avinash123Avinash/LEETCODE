class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=s.size();
        int m=t.size();
        string s1="";
        string t1="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='#')
            { 
                if(s1.empty())
                continue;
                else
            s1.pop_back();
            }
            else
            s1.push_back(s[i]);
        }
         for(int i=0;i<m;i++)
        {
            if(t[i]=='#')
            {
                 if(t1.empty())
                continue;
                else
            
            t1.pop_back();
            }
            else
            t1.push_back(t[i]);
        }
        int n1=s1.size();
        int m1=t1.size();
        if(n1!=m1)
        return false;
        for(int i=0;i<n1;i++)
        {
            if(s1[i]!=t1[i])
            return false;
        }
        
        return true;
    }
};