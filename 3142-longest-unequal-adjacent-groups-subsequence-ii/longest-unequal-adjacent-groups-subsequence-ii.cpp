class Solution {
public:
    bool differByOne(const string& a, const string& b) {
        int diff = 0;
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) ++diff;
            if (diff > 1) return false;
        }
        return diff == 1;
    }

    vector<string> getWordsInLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        vector<int> dp(n, 1); // Longest length ending at i
        vector<int> prev(n, -1); // To reconstruct path

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (groups[i] != groups[j] &&
                    words[i].length() == words[j].length() &&
                    differByOne(words[i], words[j])) {
                    if (dp[j] + 1 > dp[i]) {
                        dp[i] = dp[j] + 1;
                        prev[i] = j;
                    }
                }
            }
        }

        // Find the index with the max length
        int maxIndex = 0;
        for (int i = 1; i < n; ++i) {
            if (dp[i] > dp[maxIndex]) maxIndex = i;
        }

        // Reconstruct the path
        vector<string> result;
        while (maxIndex != -1) {
            result.push_back(words[maxIndex]);
            maxIndex = prev[maxIndex];
        }

        reverse(result.begin(), result.end());
        return result;
    }
};
