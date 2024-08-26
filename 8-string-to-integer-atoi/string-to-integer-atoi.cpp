class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        // string ans;
        long long ans=0;
        int sign=1;
        int i=0;
       while(i<n and s[i]==' ')
       {
          i++;
       }
       if(i<n and (s[i]=='-' || s[i]=='+'))
       {
        if(s[i]=='-')
        sign=-1;
        else
        sign=1;
        i++;
       }
       while(i<n and isdigit(s[i]))
       {
        int digit=s[i]-'0';
        if(ans>(INT_MAX-digit)/10 )return (sign==1)?INT_MAX:INT_MIN;
        ans=ans*10+digit;
        i++;
       }
       
       return ans*sign;
    }
};