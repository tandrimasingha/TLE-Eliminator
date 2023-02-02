https://cses.fi/problemset/task/1641/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++)
    {
        v[i].second=i+1;
        cin>>v[i].first;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++)
    {
        int rem=x-v[i].first;
        int l=i+1;
        int r=n-1;
        while(l<r)
        {
            if(v[l].first+v[r].first==rem)
            {
                cout<<v[l].second<<" "<<v[r].second<<" "<<v[i].second<<endl;
                return 0;
            }
            else if(v[l].first+v[r].first<rem)
            {
                l++;
            }
            else
            r--;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
