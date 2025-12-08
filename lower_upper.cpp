#include<bits/stdc++.h>
using namespace std;
void count(string &s,int l)
{   if(l==-1) return ;
    if(s[l]>='a' && s[l]<='z') s[l]=char(int(s[l])-32); //if(s[l]>=97 && s[l]<=122) s[l]='A'+s[l]-'a';
    count(s,l-1);
}
int main()
{
    string s="Harsh";
    int r=s.size()-1;
    count(s,r);
    cout<<s;
}