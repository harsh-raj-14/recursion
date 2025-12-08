#include<bits/stdc++.h>
using namespace std;
void subarray( vector<int>v,int l,int r)
{
    if(l==v.size()) return;
    else if(l>r)
    {
         subarray(v,0,r+1);
    }
    else{
        for(int i=l;i<=r;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        subarray(v,l+1,r);
    }
}
int main()
{
    vector<int>v={3,1,4,2};
    int n=v.size();
    subarray(v,0,0);
}