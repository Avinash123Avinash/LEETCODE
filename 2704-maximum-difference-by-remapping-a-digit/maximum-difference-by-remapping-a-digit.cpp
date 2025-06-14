class Solution {
public:
    int minMaxDifference(int num) {
        
        string ans=to_string(num);
        string maxi=ans;
        string mini=ans;
       char maxc;
       char minc=ans[0];
       int n=ans.size();
       for(int i=0;i<n;i++)
       {
        if(ans[i]!='9')
        {
            maxc=ans[i];
            break;
        }
       }
       for(int i=0;i<n;i++)
       {
        if(ans[i]==maxc)
        {
            maxi[i]='9';
        }
        if(ans[i]==minc)
        {
        mini[i]='0';
        }
       }
       cout<<stoi(maxi)<<endl;
       cout<<stoi(mini);
    int result=stoi(maxi)-stoi(mini);

     return result;
    }
};