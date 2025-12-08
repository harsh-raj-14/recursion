//         cout<<endl;
//         subarray(v,l+1,r);
//     }
// }
// int main()
// {
//     vector<int>v={1,2,3};
//     int n=v.size();
//     subarray(v,0,0);
// }

#include <bits/stdc++.h>
using namespace std;
void subseq(vector<int> &v, int l, int n,vector<vector<int>>&ans,vector<int> &temp)
{  if(l==n) 
    {
    ans.push_back(temp);
    return ;
    }
   subseq(v,l+1,n,ans,temp);
   temp.push_back(v[l]);
   subseq(v,l+1,n,ans,temp);
}
int main()
{
   vector<int>v={1,2,3};
   vector<vector<int>>ans;
   vector<int>temp;
   int n=v.size();