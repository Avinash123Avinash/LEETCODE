class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m, int k) {
        int n = bloomDay.size();
        int cnt = 0;
        int bouque = 0;
        for (int i = 0; i < n; i++) {
            if (day >= bloomDay[i]) {
                cnt++;
            } else {
                bouque += cnt / k;
                cnt = 0;
            }
        }
        bouque += cnt / k;
        if (bouque >= m)
            return true;
        else
            return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long total=m*1LL*k*1LL;
        if (n < total)
            return -1;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, bloomDay[i]);
            mini = min(mini, bloomDay[i]);
        }
        // for (int j = mini; j <= maxi; j++) {
        //     if (possible(bloomDay, j, m, k))
        //         return j;
        // }
        int f=mini;
        int h=maxi;
        
        while(f<=h)
        {
            int mid=(f+h)/2;
            if(possible(bloomDay, mid, m, k))
            {
              h=mid-1;
            }
            else
            {
                f=mid+1;
            }

        }
        return f;
    }
};