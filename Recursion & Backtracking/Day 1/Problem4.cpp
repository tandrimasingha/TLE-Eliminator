https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S

#include<bits/stdc++.h>
using namespace std;
double avg(vector<double> v,double n)
{
    if(n==0) return 0;
    return avg(v,n-1)+v[n-1];
}
int main()
{
    double n;
    cin>>n;
    vector<double> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    cout<<fixed<<avg(v,n)/n<<setprecision(6)<<endl;
}
