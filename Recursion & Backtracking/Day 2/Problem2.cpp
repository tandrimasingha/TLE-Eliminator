https://cses.fi/problemset/task/1624


#include<bits/stdc++.h>
 
using namespace std;
int ans=0;
bool safe(vector<vector<char>> &v, int row, int col)
{
    int r=row;
        int c=col;
        while(row>=0 && col>=0)
        {
            if(v[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=r;
        col=c;
         while(col>=0)
        {
            if(v[row][col]=='Q') return false;
           
            col--;
        }
        row=r;
        col=c;
         while(row<8 && col>=0)
        {
            if(v[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;
}
void solve(vector<vector<char>> &v, int col)
{
    if(col==8){
        ans++;
      return;
    }
    
 
    for(int i=0;i<8;i++)
    {
        if(v[i][col]=='*' || !safe(v,i,col))
        continue;
          v[i][col]='Q';
            solve(v,col+1);
            v[i][col]='.';
        
    }
   
}
int main()
{
    vector<vector<char>> v(8,vector<char> (8,0));
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>v[i][j];
        }
      }
     solve(v,0);
     cout<<ans;
      return 0;
  }
