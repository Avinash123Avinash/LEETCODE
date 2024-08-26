class Solution {
public:
void f(double& x,int n,double& ans)
{
    if(n==0)
    return;
    if(n>0)
    {
        ans=ans*x;
        f(x,n-1,ans);
    }
    else if(n<0)
    {
        ans=ans/x;
        f(x,n+1,ans);
    }
}
    double myPow(double x, int n) {
        //   if(x==1 || x==-1)
        //   return x;
        //   if(n==INT_MIN)
        //   return 0;
        //   double ans=x;
        // f(x,n,ans);
        // return ans/x;
        double ans;
        if(n<0) ans = 1.000/solve(x,-1*(long)n);
        else ans = solve(x,n);

        return ans;
    }


    double solve(double x, long n){
        if(n==0)    return 1.000;
        if(n==1)    return x;
        double ans = solve(x,n/2);
        if(n%2==0){
            return ans*ans;
        }else{
            return ans*ans*x;
        }
    }
};