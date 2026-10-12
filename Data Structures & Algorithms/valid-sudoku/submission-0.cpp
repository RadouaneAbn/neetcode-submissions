class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        string point = ".";
        vector< unordered_set<char> > v(9);
        vector< unordered_set<char> > h(9);
        vector< unordered_set<char> > a(9);

        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.')
                    continue ;
                if (!h[i].insert(board[i][j]).second)
                    return (false);
                if (!v[j].insert(board[i][j]).second)
                    return (false);
                if (!a[(i / 3) * 3 + (j / 3)].insert(board[i][j]).second)
                    return (false);
            }
        }
        return (true);
    }
};
