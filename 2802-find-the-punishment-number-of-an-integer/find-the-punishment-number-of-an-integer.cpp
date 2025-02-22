class Solution {
public:
bool check(int n,const string& sq,int ind=0,int sum1=0)
{
    if(ind==sq.size())
    return sum1==n;
    int num=0;
   for(int i=ind;i<sq.size();i++)
   {
    num=num*10+(sq[i]-'0');
    if(sum1+num>n)break;
    if(check(n,sq,i+1,sum1+num))return true;
   }
    return false;
}
    int punishmentNumber(int n) {
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            int sq=i*i;
            if(check(i,to_string(sq)))
            sum+=sq;
        }
        return sum;
    }
};