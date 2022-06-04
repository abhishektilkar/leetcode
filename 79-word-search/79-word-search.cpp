class Solution {
public:
    bool val(vector<vector<char>> & board, string word,int i,int x,int y) {
        if(i >= word.size()) {
            return true;
        }
        if(x < 0 || y < 0 || x >= board.size() || y >= board[x].size() || board[x][y] != word[i]) {
            return 0;
        }
        // cout << board[x][y] << " " << x << " " << y << endl;
        board[x][y] = '0';
        
        bool iq =  (val(board,word,i+1,x+1,y) || 
                    val(board,word,i+1,x-1,y) || 
                    val(board,word,i+1,x,y+1) ||
                    val(board,word,i+1,x,y-1));
        
        board[x][y] = word[i];
        
        return iq;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int N = board.size();
        int M = board[0].size();

        for(int x=0;x<N;x++) {
            for(int y=0;y<M;y++) {
                if(board[x][y] == word[0]) {
                    if(val(board,word,0,x,y)) {
                        return 1;
                    }
                }
            }
        }
        return 0;
    }
};