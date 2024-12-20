class Solution {
public:
    bool check(vector<vector<char>>& board, string& word, int i, int j, int n,
               int m, int index) {
        if (index == word.size())
            return true;

        if (i < 0 || j < 0 || i >= n || j >= m  ||
            board[i][j] != word[index])
            return false;
        char temp = board[i][j];
        board[i][j] = '#';

        bool top = check(board, word, i - 1, j, n, m, index + 1);
        bool bottom = check(board, word, i + 1, j, n, m, index + 1);
        bool right = check(board, word, i, j + 1, n, m, index + 1);
        bool left = check(board, word, i, j - 1, n, m, index + 1);
        board[i][j] = temp;
        return top || bottom || right || left;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        int index = 0;
        int l = word.size();
        if (l > n * m)
            return false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (check(board, word, i, j, n, m, index))
                    return true;
            }
        }
        return false;
    }
};