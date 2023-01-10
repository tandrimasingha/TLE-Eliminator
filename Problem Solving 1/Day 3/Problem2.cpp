https://codeforces.com/contest/295/problem/A


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    vector<vector<ll>> opera(m,vector<ll> (3,0));
    for(auto &x:opera)
    {
        for(auto &y:x)
        {
            cin>>y;
        }
    }
    vector<ll> fre(m,0);
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        l--; r--;
        fre[l]+=1;
        fre[r+1]-=1;
    }
    for(int i=1;i<=m;i++)
    {
        fre[i]+=fre[i-1];
    }
    vector<ll> diff(n+1,0);
    for(int i=0;i<m;i++)
    {
        ll d=opera[i][2]*fre[i];
        ll L=opera[i][0];
        ll R=opera[i][1];
        L--; R--;
        diff[L]+=d;
        diff[R+1]-=d;
        
    }
    for(int i=0;i<n;i++)
    {
        ll x=arr[i];
        if(i>0) diff[i]+=diff[i-1];
        x+=diff[i];
        cout<<x<<" ";
    }
    return 0;
}
