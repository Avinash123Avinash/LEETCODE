class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt=0;
        if(high<10)
        return 0;
        for(int i=low;i<=high;i++)
        {
            int sum1=0;
            int sum2=0;
            string num=to_string(i);
            int n=num.size();
            for(int j=0;j<n/2;j++)
            {
                sum1+=num[j]-'0';
            }
             for(int j=n/2;j<n;j++)
            {
                sum2+=num[j]-'0';
            }
            if(sum1==sum2 and n%2==0)
            cnt++;
        }
        return cnt;
    }
};