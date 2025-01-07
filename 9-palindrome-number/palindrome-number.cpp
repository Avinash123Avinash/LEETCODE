class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return false;
        // vector<int>ans;
        long long s=0;
        int num=abs(x);

        while(num!=0)
        {
            int d=num%10;
            s=s*10+d;
            num=num/10;
        }
        if(s==x)
        return true;
        return false;
      
    }
};