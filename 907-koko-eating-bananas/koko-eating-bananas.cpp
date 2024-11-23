class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        int f=1;
        int l=piles[n-1];
        long long total;
        //   int ans=0;
        while(f<=l)
        {
            int mid=(f+l)/2;
             total=0;
            for(int j=0;j<n;j++)
            {
                if(piles[j]%mid!=0)
                total+=piles[j]/mid+1;
                else
                total+=piles[j]/mid;
            }
            if(total<=h)
            {
            //    ans=mid;
               l=mid-1;
            }
            else
            {
                f=mid+1;
            }


        }
        return f;
    }
};