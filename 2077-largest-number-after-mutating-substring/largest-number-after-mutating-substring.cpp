class Solution {
public:
    string maximumNumber(string num, vector<int>& change) {
        int n=change.size();
        // int maxi=stoi(num);
        string ans=num;
        bool flag=false;
        for(int i=0;i<num.size();i++)
        {
            int digit=num[i]-'0';
            if(digit<change[digit])
            {
            num[i]=change[digit]+'0';
            flag=true;
            }
            else if(digit>change[digit] && flag==true )
            {
                break;
            }
        }
      
        return num;
    }
};