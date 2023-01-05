https://cses.fi/problemset/task/1646

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ll n,x,q;
    cin>>n>>q;
    vector<ll>pre(n,0);
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        pre[i]=x+pre[i-1];
    }
   
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
 
        cout<<pre[r]-pre[l-1]<<endl;
    }
    return 0;
}
