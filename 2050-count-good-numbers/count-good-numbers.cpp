class Solution {
public:
int MOD=1e9+7;
// ki jab bhi ham  y ko divide karte hai tab agar odd rahata hai to ham ek number ko kam karlete hai iske liye agar y ka value odd hota hai tab ham ek x extra multiply karte hai
// i.e 5/2=2 yaha par 3 part gaya lekin ham do ko consider kiye iske liye ham ek extar x multiply karte hai
long long pow(long long x,long long y)
{
    if(y==0)
    return 1.00000;
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