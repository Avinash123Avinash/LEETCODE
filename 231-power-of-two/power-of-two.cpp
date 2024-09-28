class Solution {
public:

    bool isPowerOfTwo(int num) {
        if(num==0)
        return false;
        if(num<0)
        return false;
    string res="";
        while(num!=1)
        {
            if(num%2==0) 
            res+='0';
            else
              res+='1';
            num=num/2;
        }
        res+='1';
        int cnt=0;
        for(int i=0;i<res.length();i++)
        {
            if(res[i]=='1')
            cnt++;
        }
        if(cnt==1)
        return true;
        return false;
     
    }
};