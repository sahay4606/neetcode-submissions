class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<unordered_set<char>> row(9), col(9), box(9);

        for(int i = 0; i < 9; i++)
        {
            for(int j = 0; j < 9; j++) 
            {

                if(board[i][j] == '.') continue;

                char val = board[i][j];
                int boxIdx = (i/3)*3 + (j/3);

                if(row[i].count(val) || col[j].count(val) || box[boxIdx].count(val))
                    return false;

                row[i].insert(val);// very simple logic for that row index has this happened 
                // not too much thinking
                col[j].insert(val);
                box[boxIdx].insert(val);
            }
        }
        return true;
    }
};