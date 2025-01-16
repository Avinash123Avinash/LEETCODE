class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        // string temp;
        // int maxi=0;
        // for(int i=0;i<n;i++)
        // {
        //     temp+=num[i];
        //     int k=stoll(temp);
        //     if(k%2!=0)
        //     {
        //         maxi=max(maxi,k);
        //     }
        // }
        // temp=to_string(maxi);
        // if(maxi==0)
        // return "";
        // return temp;
         for(int i=n-1;i>=0;i--)
         {
            int k=num[i]-'0';
            if(k%2==0)
            {
                num.pop_back();
            }
            else
            {
                break;
            }
         }
         return num;
    }
};