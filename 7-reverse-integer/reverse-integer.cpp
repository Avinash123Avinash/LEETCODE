class Solution {
public:
    int reverse(int x) {
    long long s=0;
    long long num=abs(x*1ll);
    while(num!=0)
    {
        // te=ake a remainder
        int d=num%10;
        // formula to make the number
        s=s*10+d;
         if(s>INT_MAX || s<INT_MIN)
        return 0;
        num=num/10;
    }
    if(x<0)
    return -s;
    return s;
    }
};