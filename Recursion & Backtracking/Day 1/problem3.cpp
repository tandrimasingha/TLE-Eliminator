https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/I


#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{
    ch = toupper(ch);
    return (ch=='A' || ch=='E' || ch=='I' ||
                        ch=='O' || ch=='U');
}
int countVovels(string str, int n)
{
    if(n==0) return 0;
    else
    return countVovels(str,n-1)+isVowel(str[n-1]);
}
int main()
{
    string s;
    getline(cin,s);
    cout<<countVovels(s,s.size())<<endl;
}
