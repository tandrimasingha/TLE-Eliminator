https://www.codechef.com/LRNDSA02/problems/COMPILER?tab=statement

#include<bits/stdc++.h>
using namespace std;
void solve() {
   string s;
   cin>>s;
   stack<char> st;
   int count=0;
   for(int i=0;i<s.size();i++)
   {
       char ch=s[i];
       if(ch=='<') st.push(ch);
       else if(!st.empty() && ch=='>'){
       st.pop();
       
           if(st.empty())
           {
               count=i+1;
           }
       }
       else 
       break;
   }
   cout<<count;
    
}
int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t=1;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve();
        cout<<endl;
    }
    return 0;
}
