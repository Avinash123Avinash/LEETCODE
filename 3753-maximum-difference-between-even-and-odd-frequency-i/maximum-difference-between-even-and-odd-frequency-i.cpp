class Solution {
public:
    int maxDifference(string s) {
        map<int,int>mpp;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            mpp[s[i]]++;
        }
        int diff=0;
         int odd=INT_MIN;
            int even=INT_MAX;
        for(auto it:mpp)
        {
           
            if(it.second%2!=0)
            {
                odd=max(it.second,odd);
            }
            else
            {
                even=min(it.second,even);
            }


        }
         diff=odd-even;
        return diff;
    }
};