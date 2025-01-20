class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=goal.size();
        string ans(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            ans[j]=s[(i+j)%n];
            }
            if(ans==goal)
            return 1;
        }
        return 0;
       
    }
};