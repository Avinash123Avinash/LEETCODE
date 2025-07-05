class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long m=abs(n*1ll)*1ll;
        while(m>0)
        {
           if(m%2==0)
           {
            x=x*x;
            m=m/2;
           }
         else if(m%2!=0)
           {
            ans=ans*x;
            m=m-1;
           }
        }
        return n<0?1/ans:ans;
    }
};