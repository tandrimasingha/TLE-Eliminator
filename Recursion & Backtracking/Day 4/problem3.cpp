https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/P

#include <bits/stdc++.h>
using namespace std;
long long solve(long long x)
{
    if(x==1) return 0;
  
    return solve(x/2)+1;
}
int main()
{
    long long x;
    cin>>x;
    cout<<solve(x)<<endl;
    return 0;
}
