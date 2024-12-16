class Solution {
public:
    bool possible(vector<int>& weights, int days, int num) {
        int sum = 0;
        int cnt = 1;
        // int j = 0;
        for (int i = 0; i < weights.size(); i++) {
           
            if (sum+weights[i] > num) {
                cnt++;
                sum = 0;
            }
            sum += weights[i];
        }
        if (cnt <= days)
            return true;
        else
            return false;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int total=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++)
        {
          total+=weights[i];
          maxi=max(maxi,weights[i]);
        }
     
        int low=maxi;
        int high=total;
       while(low<=high) {
        int mid=(low+high)/2;
              
            if (possible(weights,days,mid))
                high=mid-1;
                else
                low=mid+1;
        }
        return low;
    }
};