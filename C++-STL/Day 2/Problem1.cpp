https://codeforces.com/problemset/problem/734/A

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  string s;
  cin>>n;
  cin>>s;
  int caa=0;
  int cdd=0;
  for(int i=0;i<n;i++)
  {
      if(s[i]=='A')
      caa++;
      else
      cdd++;
  }
  if(caa>cdd)
  cout<<"Anton"<<endl;
  else if(caa<cdd)
  cout<<"Danik"<<endl;
  else
  cout<<"Friendship"<<endl;
  return 0;
}
