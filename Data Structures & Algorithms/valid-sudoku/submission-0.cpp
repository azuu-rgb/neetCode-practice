class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector <unordered_set<int>> verifyR(9);
        vector <unordered_set<int>> verifyC(9);
        vector <unordered_set<int>> verifyB(9);

        for(int r = 0; r < 9;r++){
                for(int c = 0; c < 9;c++){
                    int value = board[r][c];
                    if(value == '.') continue;
                    int subBox = 3 * (r/3) + (c/3);
                    if(verifyR[r].count(value) || verifyC[c].count(value) || verifyB[subBox].count(value) ){
                        return false;
                    }
                    verifyR[r].insert(value);
                    verifyC[c].insert(value);
                    verifyB[subBox].insert(value);
                }
        }
        return true;
    }
};
