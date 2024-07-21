class Solution {
public:
    vector<vector<char>> grid;
    // vector<vector<string>>result;
    bool possible(int row, int col, int n) {
        // column check
        for (int i = row - 1; i >= 0; i--) {
            if (grid[i][col] == 'Q')
                return false;
        }
        // left diagonal check
        for (int i = row - 1,j=col-1; i >= 0 and j>=0; i--,j--) {
                if (grid[i][j] == 'Q')
                    return false;
        }
        // right diagonal check
        for (int i = row - 1,j=col+1; i >= 0 and j<n; i--,j++) {
           
                if (grid[i][j] == 'Q')
                    return false;
            
        }
        return true;
    }
    vector<vector<string>> result;
    void f(int row, int n) {
        if (row == n) {
            vector<string> ans;
            for (int i = 0; i < n; i++) {
                string temp = "";
                for (int j = 0; j < n; j++) {
                    //  temp.push_back(string(n,grid[i][j]));
                    temp += grid[i][j];
                }
                ans.push_back(temp);
            }
            result.push_back(ans);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (possible(row, col, n)) {
                grid[row][col] = 'Q';
                f(row + 1, n);
                grid[row][col] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        grid.clear();
        // result.clear();
        grid.resize(n, vector<char>(n, '.'));
        f(0, n);
        return result;
    }
};