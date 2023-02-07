https://www.codechef.com/problems/MAXDIFF?tab=statement

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
  
   ll n,k;
   cin>>n>>k;
   vector<ll> v(n);
   int sum=0;
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
       sum+=v[i];
   }
   sort(v.begin(),v.end());
   ll s=0;
   ll e=0;
   for(int i=0;i<k;i++)
   {
       s+=v[i];
       e+=v[n-i-1];
   }
  if(sum-2*s>2*e-sum)
  {
      cout<<sum-2*s;
  }
  else
  cout<<2*e-sum;
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
