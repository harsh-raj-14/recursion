#include <bits/stdc++.h>
using namespace std;
void print(vector<int>&v,int n)
{
    if(n==-1) return;
     print(v,n-1);
     cout<<v[n];
}
int main()
{  vector<int>v={1,2,3,4};
   int n=v.size()-1;
    print(v,n);
}