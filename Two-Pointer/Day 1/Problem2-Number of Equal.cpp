https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll> v1(n),v2(m);
    for(auto &i:v1)
    {
        cin>>i;
    }
    for(auto &i:v2)
    {
        cin>>i;
    }
    ll i=0;
    ll j=0;
    ll ans=0;
    while(i<n && j<m)
    {
        if(v1[i]==v2[j])
        {
            ll match=v1[i];
            ll cnt1=0;
            ll cnt2=0;
            while(i<n && v1[i]==match)
            {
                cnt1++;
                i++;
            }
            while(j<m && v2[j]==match)
            {
                cnt2++;
                j++;
            }
            ans+=(cnt1*cnt2);
        }
        else if(v1[i]<v2[j])
        {
            i++;
        }
        else j++;
    }
    
    cout<<ans<<endl;
}
