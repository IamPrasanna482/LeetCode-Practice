class Solution {
    bool isSafe(int row, int col, vector < string > board, int n) {
      // check upper element
      int duprow = row;
      int dupcol = col;

      while (row >= 0 && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row--;
        col--;
      }

      col = dupcol;
      row = duprow;
      while (col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        col--;
      }

      row = duprow;
      col = dupcol;
      while (row < n && col >= 0) {
        if (board[row][col] == 'Q')
          return false;
        row++;
        col--;
      }
      return true;
    }
public:
    void solve(int &cnt,int col,vector<string> &board, int n){
        if(col>=n){
            cnt++;
            return;
        }   
        
        
        for(int row=0;row<n;row++){
            if(isSafe(row,col,board,n)){
                board[row][col]='Q';
                solve(cnt,col+1,board,n);
                board[row][col]='.'; //backtrack;
            }
        }
    }
    int totalNQueens(int n) {
        int cnt=0;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        
        solve(cnt,0,board,n);
        return cnt;
    }
};