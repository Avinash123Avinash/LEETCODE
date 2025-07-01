class Solution {
public:
    int possibleStringCount(string word) {
        int totalPossible = 1;
        int n = word.size();

        for (int i = 0; i < n;) {
            int j = i;

            while (j < n && word[j] == word[i]) {
                j++;
            }

            int count = j - i;

            if (count > 1) {
                totalPossible += count - 1;
            }

            i = j;
        }

        return totalPossible;
    }
    };