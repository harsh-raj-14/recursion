//best
// #include <bits/stdc++.h>
// using namespace std;
// int mini(vector<int>&v,int n,int b)
// {
//     if(n==-1) return b;
//     if(b<v[n]) mini(v,n-1,b);
//     else  mini(v,n-1,v[n]);
// }
// int main()
// {  vector<int>v={3,2,4,1,6};
//    int n=v.size()-1;
//    int b=INT_MAX;
//    cout<<mini(v,n,b);
// }

//better
#include <bits/stdc++.h>
using namespace std;
int mini(vector<int>&v,int n)
{
    if(n==-1) return v[0] ;
    return min(v[n], mini(v,n-1));
}
int main()
{  vector<int>v={3,2,4,1,6};
   int n=v.size()-1;
   int b=INT_MAX;
   cout<<mini(v,n);
}