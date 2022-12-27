https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y

#include <bits/stdc++.h>
using namespace std;

int solve(int s, int e)
{
   if(s==e) return 1;
   int cnt=0;
   if(s+1<=e) cnt+=solve(s+1,e);
   if(s+2<=e) cnt+=solve(s+2,e);
   if(s+3<=e) cnt+=solve(s+3,e);
   return cnt;
}
int main()
{
    int s,e;
    cin>>s>>e;
    cout<<solve(s,e)<<endl;
    return 0;
}
