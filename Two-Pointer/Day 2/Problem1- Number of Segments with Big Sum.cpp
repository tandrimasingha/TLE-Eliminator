https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/D

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> v(n);
    for(auto &i:v){
    cin>>i;
    
    }
    
    ll l=0;
    ll r=0;
    ll sum=0;
    ll c=0;
    while(r<n)
    {
        sum+=v[r];
        while(sum>=x)
        {
            sum-=v[l];
            l++;
        }
        
        r++;
        c+=(r-l);
    }
    cout<<(n*(n+1))/2 - c<<endl;
}
