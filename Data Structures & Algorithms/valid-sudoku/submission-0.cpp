class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int seen[9]={0};
        for (int i=0; i<9; i++){
            for (int j=0; j<9; j++){
                if (board[i][j]=='.') continue;
                seen[board[i][j]-'1']++;
                if (seen[board[i][j]-'1']>1) return false;
            }
            std::fill(std::begin(seen), std::end(seen), 0);       
        }
        for (int i=0; i<9; i++){
            for (int j=0; j<9; j++){
                if (board[j][i]=='.') continue;
                seen[board[j][i]-'1']++;
                if (seen[board[j][i]-'1']>1) return false;
            }
            std::fill(std::begin(seen), std::end(seen), 0);       
        }
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                for (int k=0; k<3; k++){
                    for (int l=0; l<3; l++){
                        if (board[3*i+k][3*j+l]=='.') continue;
                        seen[board[3*i+k][3*j+l]-'1']++;
                        if (seen[board[3*i+k][3*j+l]-'1']>1) return false;
                    }
                }
                std::fill(std::begin(seen), std::end(seen), 0);          
            }
        }
        return true;
    }
};
