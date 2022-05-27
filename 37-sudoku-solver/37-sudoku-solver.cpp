class Solution {

public:
    void solveSudoku(vector<vector<char>>& board) {
        // return //
        solve(board);
    }
    
    bool solve(vector<vector<char>>& board) {
        for(int i=0;i<9;i++) {
            for(int j=0;j<9;j++) {
                
                if(board[i][j] == '.') {
                    
                    for(char p='1';p<='9';p++) {
                        
                        if(canPlace(board, i, j, p)) {
                            board[i][j] = p;
                            
                            if(solve(board)) {
                                return 1;
                            }
                            
                            board[i][j] = '.';
                        }
                        
                    }
                    return 0;
                    
                }                
            }
        }
        return true;
    }
    
    bool canPlace(vector<vector<char>>& board, int i, int j, char num) {
        
        for (int idx = 0; idx < 9; idx++) {
            
            if (board[i][idx] == num) return 0;
            if (board[idx][j] == num) return 0;
            if (board[(i/3)*3 + (idx/3)][(j/3)*3 + (idx%3)] == num) return 0;
        
        }
        
        return true;
    
    }
    
    
    
    
    
    
    
};