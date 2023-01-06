https://cses.fi/problemset/task/1650

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ll n,q;
    cin>>n>>q;
    vector<ll>pre(n,0);
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        pre[i]=x^pre[i-1];
    }
   
    while(q--)
    {
        ll l,r;
        cin>>l>>r;
         long ans=pre[r]^pre[l-1];
        cout<<ans<<endl;
    }
    return 0;
}
