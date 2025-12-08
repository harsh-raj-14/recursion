// #include<bits/stdc++.h>
// using namespace std;
// void rev(vector<int>&v,int l,int r)
// {
//    if(l>r) return;
//    swap(v[l],v[r]);
//    rev(v,l+1,r-1);
// }
// int main()
// {
//     vector<int>v={1,2,3,4,5};
//     int l=0,r=v.size()-1;
//     rev(v,l,r);
//     for(int i:v)
//     {
//         cout<<i<<" ";
//     }
// }

#include<bits/stdc++.h>
using namespace std;
void rev(string &s,int l,int r)
{
   if(l>r) return;
   swap(s[l],s[r]);
   rev(s,l+1,r-1);
}
int main()
{
    string s="harsh";
    int l=0,r=s.size()-1;
    rev(s,l,r);
    for(char i:s)
    {
        cout<<i;
    }
}