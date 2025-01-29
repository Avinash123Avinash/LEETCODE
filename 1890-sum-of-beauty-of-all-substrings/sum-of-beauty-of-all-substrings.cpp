class Solution {
public:
    int beautySum(string s) {
        vector<string> ans;
        int n = s.size();
        int sum = 0;
        // for(int i=0;i<ans.size();i++)
        // {
        //     cout<<ans[i]<<endl;
        // }

        for (int i = 0; i < n; i++) {
            map<char, int> mpp;
            for (int j = i; j < n; j++) {

                mpp[s[j]]++;
                int maxi = INT_MIN;
                int mini = INT_MAX;
                for (auto it : mpp) {
                    maxi = max(maxi, it.second);
                    mini = min(mini, it.second);
                }

                sum += (maxi - mini);
            }
        }
        return sum;
    }

    //     int n=s.size();
    //     int sum=0;

    //     for(int i=0;i<n;i++)
    //     {
    //         vector<int>freq(26,0);
    //         for(int j=i;j<n;j++)
    //         {
    //             freq[s[j]-'a']++;
    //               int maxi=INT_MIN;
    //         int mini=INT_MAX;
    //             for(int k=0;k<26;k++)
    //             {
    //                 if(freq[k]>0)

    //                 {
    //                     maxi=max(maxi,freq[k]);
    //                     mini=min(mini,freq[k]);
    //                 }
    //             }
    //             sum+=maxi-mini;
    //         }
    //     }
    //     return sum;

    // }
};