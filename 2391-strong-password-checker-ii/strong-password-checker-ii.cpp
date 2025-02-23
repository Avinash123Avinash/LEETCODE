class Solution {
public:
    bool strongPasswordCheckerII(string pass) {
        int n=pass.size();
        if(n<8)
        return false;
        map<int,int>mpp;
         
        for(int i=0;i<26;i++)
        {
            mpp[i]++;
        }
        char prev='_';
        int f1=0;
        int f2=0;
        int f3=0;
        int f4=0;
        for(int i=0;i<n;i++)
        {
         if(mpp.find(pass[i]-'a')!=mpp.end())
         f1=1;
           if(mpp.find(pass[i]-'A')!=mpp.end())
         f2=1;
           if(isdigit(pass[i]))
         f3=1;
         if(pass[i]=='!' ||pass[i]=='@' ||pass[i]=='#' ||pass[i]=='$' ||pass[i]=='%' ||pass[i]=='^' ||pass[i]=='&' ||pass[i]=='*' ||pass[i]=='(' ||pass[i]==')' ||pass[i]=='-' ||pass[i]=='+' )
         f4=1;
          if(pass[i]==prev)
          return false;
          prev=pass[i];
        }
        if(f1==1 and f2==1 and f3==1 and f4==1)
        return true;
        return false;
    }
};