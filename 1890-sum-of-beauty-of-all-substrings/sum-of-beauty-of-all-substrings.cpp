class Solution {
public:
    int beautySum(string s) {
        // vector<string> ans;
        // int n = s.size();
        // int sum = 0;
        // for (int i = 0; i < n; i++) {
        //    string temp;
        //     for (int j = i ; j <n; j++) {
        //         temp += s[j];
        //         ans.push_back(temp);    
        //     }
        // }
        
        
        // map<char, int> mpp;
        // for (int i = 0; i < ans.size(); i++) {
        //     int maxi = INT_MIN;
        //     int mini = INT_MAX;
        //     for (int j = 0; j < ans[i].size(); j++) {
        //         mpp[ans[i][j]]++;
        //         maxi = max(maxi, mpp[ans[i][j]]);
        //         mini = min(mini, mpp[ans[i][j]]);
        //     }
        //     if (maxi != mini and mpp.size()>1) {
        //         sum += (maxi - mini);
        //     }
        //     mpp.clear();
        // }
        // return sum;
        int n=s.size();
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            vector<int>freq(26,0);
            for(int j=i;j<n;j++)
            {
                freq[s[j]-'a']++;
                  int maxi=INT_MIN;
            int mini=INT_MAX;
                for(int k=0;k<26;k++)
                {
                    if(freq[k]>0)
                   
                    {
                        maxi=max(maxi,freq[k]);
                        mini=min(mini,freq[k]);
                    }
                }
                sum+=maxi-mini;
            }
        }
        return sum;

    }
};