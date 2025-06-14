class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;
        int buy = prices[0];
        // int sell=prices[1];
        for (int i = 1; i < n; i++) {
            buy = min(buy, prices[i]);

            ans = max(ans, prices[i] - buy);
        }
    
    return ans;
}
}
;