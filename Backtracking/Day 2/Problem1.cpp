https://leetcode.com/problems/n-queens/

class Solution {

   bool possible(int row,int col, vector<string> &board,int n)
    {
        int r=row;
        int c=col;
        while(row>=0 && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=r;
        col=c;
         while(col>=0)
        {
            if(board[row][col]=='Q') return false;
           
            col--;
        }
        row=r;
        col=c;
         while(row<n && col>=0)
        {
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
    }
    void func(int col,int n, vector<vector<string>> &ans, vector<string> &board)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(possible(row,col,board,n))
            {
                board[row][col]='Q';
                func(col+1,n,ans,board);
                board[row][col]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
       for(int i=0;i<n;i++)
       {
           board[i]=s;
       }
        func(0,n,ans,board);
        return ans;
        
    }
};
