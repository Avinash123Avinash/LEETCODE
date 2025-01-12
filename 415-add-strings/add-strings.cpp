class Solution {
public:
    string addStrings(string num1, string num2) {
        int n=num1.size();
        int m=num2.size();
        string ans;
        int i=n-1;
        int j=m-1;
        int n1=0;
        int n2=0;
        int n3=0;
        int c=0;
        while(i>=0 and j>=0)
        {
            n1=num1[i]-'0';
            n2=num2[j]-'0';
            n3=n1+n2+c;
            c=n3/10;            
            ans.push_back('0'+(n3%10));
            i--;j--;
        }
        while(i>=0)
        {
             n1=num1[i]-'0';
             n3=n1+c;
            c=n3/10;            
            ans.push_back('0'+(n3%10));
            i--;
        }
         while(j>=0)
        {
            n2=num2[j]-'0';
             n3=n2+c;
            c=n3/10;            
            ans.push_back('0'+(n3%10));
            j--;
        }
        if(c!=0)
        ans.push_back('0'+c);
        reverse(ans.begin(),ans.end());
        return ans;



        // long long n1=stoll(num1);
        // long long n2=stoll(num2);
        // long long n3=n1+n2;
        // string ans;
        // if(n3==0)
        // return "0";
        // // ans.push_back(0);
        // while(n3!=0)
        // {
        //     int d=n3%10;
        //     ans.push_back('0'+d);
        //     n3=n3/10;
        // }
        // reverse(ans.begin(),ans.end());
        // return ans;


    }
};