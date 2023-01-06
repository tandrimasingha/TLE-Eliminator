https://cses.fi/problemset/task/1652

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int m,n;
    string s;
    cin>>m>>n;
    vector<vector<int>>arr(m+1,vector<int>(m+1));
    for(int i=1;i<=m;i++)
    {
        cin>>s;
       
        for(int j=1;j<=m;j++)
        {
            int val;
            if(s[j-1]=='*'){
            val=1;
            }
            else{
            val=0;
            }
          arr[i][j]=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1]+val;  
        }
        
    }
    int x1,y1,x2,y2;
    while(n--)
    {
        
        cin>>x1>>y1>>x2>>y2;
        cout<<arr[x2][y2]-arr[x1-1][y2]-arr[x2][y1-1]+arr[x1-1][y1-1]<<endl;
    }
}
