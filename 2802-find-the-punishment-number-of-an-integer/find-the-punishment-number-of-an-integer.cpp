class Solution {
public:
    // bool check(int n,const string& squr,int ind=0,int sum1=0)
    // {
    //     if(ind==squr.size())
    //     return sum1==n;
    //     int num=0;
    //     for(int i=ind;i<squr.size();i++)
    //     {
    //         num=num*10+(squr[i]-'0');
    //         if(sum1+num>n)break;
    //         if(check(n,squr,i+1,sum1+num))return true;
    //     }
    //     return false;
    // }
    bool check(int num, int target) {
        if (target < 0 || num < target )
            return false;
        if (num == target)
            return true;
        return check(num / 10, target - num % 10) ||
               check(num / 100, target - num % 100) ||
               check(num / 1000, target - num % 1000);
    }
    int punishmentNumber(int n) {
        int sum = 0;
        for (int j = 1; j <= n; j++) {
            int squr = j * j;
            if (check(squr, j))
                sum += squr;
        }
        return sum;
    }
};