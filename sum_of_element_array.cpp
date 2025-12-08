#include <bits/stdc++.h>
using namespace std;
int print(vector<int>&v,int n)
{
    if(n==-1) return 0;
    return v[n]+print(v,n-1);
}
int main()
{  vector<int>v={1,2,3,4};
   int n=v.size()-1;
    cout<<print(v,n);
}