https://cses.fi/problemset/task/1073


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
   int n;
   cin>>n;
   
   multiset<int> st;
   for(int i=0;i<n;i++)
   {
       int x;
       cin>>x;
       auto it=st.upper_bound(x);
       if(it==st.end())
       st.insert(x);
       else{
           st.erase(it);
           st.insert(x);
       }
   }
   cout<<st.size()<<endl;
    return 0;
}
