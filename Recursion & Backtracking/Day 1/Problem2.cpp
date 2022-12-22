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
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E'|| s[i]=='I'|| s[i]=='O'|| s[i]=='U')
        c++;
        else continue;
    }
    cout<<c<<endl;
}
