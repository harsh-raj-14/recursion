#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &s,int l,int r)
{
   if(l>r) return true;;
   if(s[l]!=s[r]) return false;
  palindrome(s,l+1,r-1);
}
int main()
{
    string s="harsh";
    int l=0,r=s.size()-1;
    cout<<palindrome(s,l,r);
}