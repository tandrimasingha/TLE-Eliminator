https://www.codechef.com/LRNDSA02/problems/STUPMACH?tab=statement

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin>>n;
    vector<ll> s(n);
    for(ll i=0;i<n;i++)
    {
        cin>>s[i];
    }
    ll mn=INT_MAX;
    ll sum=0;
   for(ll i=0;i<n;i++)
   {
      mn=min(mn,s[i]);
      sum+=mn;
   }
   cout<<sum;
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
        cout<<endl;
    }
    return 0;
}
