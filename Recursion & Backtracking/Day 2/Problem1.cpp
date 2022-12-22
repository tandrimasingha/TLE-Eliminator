https://cses.fi/problemset/task/1623/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

long long minsum(vector<long long> v,long long n, long long s1,long long s2)
{
    if(n<0) return abs(s1-s2);
    long long pick=minsum(v,n-1,s1+v[n],s2);
    long long ntpick=minsum(v,n-1,s1,s2+v[n]);
    return min(pick,ntpick);
}
int main()
{
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(long long i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<minsum(v,n-1,0,0)<<endl;
    return 0;
}
