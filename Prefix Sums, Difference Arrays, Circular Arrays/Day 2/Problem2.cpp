https://www.codechef.com/ZCOPRAC/problems/ZCO22001?tab=statement

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int m,n;
    cin>>m>>n;
    vector<vector<int>>v(m+1,vector<int>(n+1));
    vector<vector<int>>arr(m+1,vector<int>(n+1));
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
          cin>>v[i][j];
          arr[i][j]=(arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1]); 
          if(v[i][j]==0)
          {
              arr[i][j]+=1;
          }
        }
        
    }
    int que;
    cin>>que;
    int x1,y1,x2,y2;
    while(que--)
    {
        
        cin>>x1>>y1>>x2>>y2;
        int ans=arr[x2][y2]-arr[x1-1][y2]-arr[x2][y1-1]+arr[x1-1][y1-1];
        if(ans>0)
        cout<<0<<endl;
        else
        cout<<1<<endl;
    }
}
