class Solution {
public:
bool check(int n,const string& squr,int ind=0,int sum1=0)
{
    if(ind==squr.size())
    return sum1==n;
    int num=0;
    for(int i=ind;i<squr.size();i++)
    {
        num=num*10+(squr[i]-'0');
        if(sum1+num>n)break;
        if(check(n,squr,i+1,sum1+num))return true;
    }
    return false;
}
    int punishmentNumber(int n) {
        int sum=0;
        for(int j=1;j<=n;j++)
        {
            int squr=j*j;
            if(check(j,to_string(squr)))
            sum+=squr;
        }
        return sum;
    }
};