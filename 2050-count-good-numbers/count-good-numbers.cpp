class Solution {
public:
int MOD=1e9+7;
long long pow(long long x,long long y)
{
    if(y==0)
    return 1;
     long long ans=pow(x,y/2);
     ans*=ans;
    ans%=MOD;
    if(y%2)
        ans*=x;
        ans%=MOD;
    return ans;
}
    int countGoodNumbers(long long n) {
        long long odd=n/2;
        long long even=n-n/2;
        return (pow(5,even)*pow(4,odd))%MOD;
    }
};