https://codeforces.com/problemset/problem/1076/A

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int f=-1;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1]){
        f=i; break;}
    }
    if(f>=0)
    {
       s.erase(s.begin()+f);
    }
    else
    s.erase(s.begin()+n-1);
    cout<<s<<endl;
}
