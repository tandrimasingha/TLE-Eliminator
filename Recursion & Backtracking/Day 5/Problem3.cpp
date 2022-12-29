https://cses.fi/problemset/task/1091

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int n,m;
    cin>>n>>m;
    multiset<int, greater<int>> st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);
    }
    for(int i=0;i<m;i++)
    {
        int k;
        cin>>k;
        auto it=st.lower_bound(k);
        if(it==st.end())
        cout<<-1<<endl;
        else{
            cout<<*it<<endl;
            st.erase(it);
        }
    }
    return 0;
}
