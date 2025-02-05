class Solution {
public:
    int characterReplacement(string s, int k) {
    //   int n=s.size();
    //     int cnt;
    //     int mini;
    //     int maxi=INT_MIN;
    //     for(int i=0;i<n;i++)
    //     {
    //          map<char,int>mpp;
    //            int prev=INT_MAX;
    //         for(int j=i;j<n;j++)
    //         {
    //           mpp[s[j]]++;
    //           mini=min(prev,mpp[s[j]]);
    //           prev=mpp[s[j]];
    //             if(mini>k and mpp.size()>1 )
    //            {
    //             break;
    //            }
    //            maxi=max(maxi,j-i+1);
    //         }
    //     }
    //     return maxi;
    // here we not able to find the min frequency element 
//    BRUETE FORCE
    // int n= s.size();
    // int maxl=INT_MIN;
    // for(int i=0;i<n;i++)
    // {
    //     int hash[26]={0};
    //     int maxf=0;
    //     for(int j=i;j<n;j++)
    //     {
    //         hash[s[j]-'A']++;
    //         maxf=max(maxf,hash[s[j]-'A']);
    //         //  for find the min frequency element in the subarray we use
    //         int min = (j-i+1)-maxf;
    //         if(min<=k)
    //         {
    //             maxl=max(maxl,j-i+1);
    //         }
    //         else
    //         break;
    //     }
    // }
    // return maxl;
    int n=s.size();
    int hash[26]={0};
    int maxf=0;
    int i=0;
    int j=0;
    int maxl=0;
    while(j<s.size())
    {
        hash[s[j]-'A']++;
        maxf=max(maxf,hash[s[j]-'A']);
        int min=(j-i+1)-maxf;
        while( min>k)
        {
            hash[s[i]-'A']--;
            maxf=0;
            for(int l=0;l<26;l++)
            {
                maxf=max(maxf,hash[l]);
            }
            i++;
            min=(j-i+1)-maxf;
            
        }
        if((j-i+1)-maxf<=k)
        {
            maxl=max(maxl,j-i+1);
        }
        j++;
    }
    return maxl;
    }
    
};