#include<bits/stdc++.h>
using namespace std;
int count(string &s,int l)
{   if(l==-1) return 0;
    if(s[l]=='a'||s[l]=='e'||s[l]=='i'||s[l]=='o'||s[l]=='u'||s[l]=='A'||s[l]=='E'||s[l]=='I'||s[l]=='O'||s[l]=='U') return 1 + count(s,l-1);
    return count(s,l-1);
}
int main()
{
    string s="ROhitRaj";
    int r=s.size()-1;
    cout<<count(s,r);
}