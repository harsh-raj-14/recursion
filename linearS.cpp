#include<bits/stdc++.h>
using namespace std;
bool linearS(vector<int>&v,int r,int s)
{  if(r==-1) return false;
    if(v[r]==s) return true;
    linearS(v,r-1,s);
}
int main()
{
    vector<int>v={1,2,3,4,5};
    int l=0,r=v.size()-1;
    int s=4;
   cout<<linearS(v,r,s);

}