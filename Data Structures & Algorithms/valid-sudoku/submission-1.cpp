class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    { // we have to take the value and assign it to a row column and box
        vector<unordered_set<int>> row(9);
        vector<unordered_set <int>> col(9);
        vector<unordered_set <int>> box(9);
        char val;// data type
        int boxi = 0;

        for (int i = 0; i < 9 ; i++)
        {
            for (int j = 0 ; j < 9 ; j ++)
           {  val = board[i][j];
                boxi= (i/3)*3 +j/3; // j/3 missed 

            if (val == '.' )
            continue;

            if (row[i].count(val) || col[j].count(val) || box[boxi].count(val) )
            return false;

            row[i].insert(val);
            col[j].insert(val);
            box[boxi].insert(val);


           }
        }
        return true;
    }
};
