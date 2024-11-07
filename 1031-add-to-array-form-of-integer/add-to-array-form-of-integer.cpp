#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size();
        vector<int> ans;
        int i = n - 1;
        int carry = 0;

        // Process each digit from the end of the array
        while (i >= 0 || k > 0) {
            if (i >= 0) {
                k += num[i];  // Add digit from num to k
                i--;
            }
            ans.push_back(k % 10); // Take last digit of k
            k /= 10; // Reduce k
        }

        reverse(ans.begin(), ans.end()); // Reverse to get final result
        return ans;
    }
};
