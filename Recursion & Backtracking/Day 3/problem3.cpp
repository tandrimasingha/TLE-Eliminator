https://cses.fi/problemset/task/1633

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    vector<ll> dp(n+1,0);
    ll mod=1000000007;
    dp[0]=1;
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(j>i) break;
            dp[i]=(dp[i]+dp[i-j]) % mod;
        }
    }
    cout<<dp[n]<<endl;
    return 0;
}
