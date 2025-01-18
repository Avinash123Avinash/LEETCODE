class Solution {
public:

double solve(double x,int n)
{
    if(n==0)
    return 1.00000;

    double ans=solve(x,n/2);
    ans*=ans;
    if(n%2)
    ans*=x;
    return ans;
}
 double myPow(double x, int n) {
    double ans;
    if(n<0) ans=1.00000/solve(x,n);
    else
    ans=solve(x,n);
    return ans;
    }
};