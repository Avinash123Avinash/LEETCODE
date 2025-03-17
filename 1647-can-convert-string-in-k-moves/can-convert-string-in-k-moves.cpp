class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        // here we first make the visited array for trace the element;
        vector<int>vis(26,0);
        int n=s.size();
        if(s.size()!=t.size())
        return false;
        for(int i=0;i<n;i++)
        {
            // find the total shist required and add 26 abd take modulo means if we gaet the 
            // smaller elemnt in the in t then add more than 26 in the s to get the t
            int shift=(t[i]-s[i]+26)%26;
            // if same elemnt encounter then continue 
            if(shift==0)
            continue;

            int time=vis[shift]*26+shift;
             vis[shift]++;
            if(time>k)
            return false;
            
        }
        return true;
    }
};