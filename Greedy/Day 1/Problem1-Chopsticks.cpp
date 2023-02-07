https://www.codechef.com/problems/TACHSTCK?tab=statement

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	// your code goes here
	ll n,d;
	cin>>n>>d;
	vector<ll> v(n);
	for(int i=0;i<n;i++)
	{
	    cin>>v[i];
	}
	sort(v.begin(),v.end());
	int cnt=0;
	for(int i=1;i<n;i++)
	{
	    if(v[i]-v[i-1]<=d) {cnt++;
	    i++;}
	   
	}
	cout<<cnt<<endl;
	
	return 0;
}
