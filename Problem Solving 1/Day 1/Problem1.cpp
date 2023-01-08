https://codeforces.com/contest/1681/problem/B

#include<bits/stdc++.h>
using namespace std;
long long rotate(vector<long long> v, long long k)
{
    long long n=v.size();
    vector<long long> q;
    k=k%n;
    for(long long i=k;i<n;i++)
        {
            q.push_back(v[i]);
        }
        for(long long i=0;i<k;i++)
        {
            q.push_back(v[i]);
        }
         for(long long i=0;i<n;i++)
        {
            v[i]=q[i];
        }
       
        return v[0];
}
void solve() {
  long long n;
  cin>>n;
  vector<long long> v(n);
  for(long long i=0;i<n;i++)
  {
      cin>>v[i];
  }
  long long m;
  cin>>m;
  long long sum=0;
  for(long long i=0;i<m;i++)
  {
      long long x;
      cin>>x;
      sum+=x;
      
  }
  long long r=rotate(v,sum);
  cout<<r<<endl;
    
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t=1;
    cin>>t;
    for(long long i=1;i<=t;i++){
        solve();
        cout<<endl;
    }
    return 0;
}
