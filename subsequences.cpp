// #include<bits/stdc++.h>
// using namespace std;
// void subarray( vector<int>v,int l,int r)
// {
//     if(l==v.size()) return;
//     else if(l>r)
//     {
//          subarray(v,0,r+1);
//     }
//     else{
//         for(int i=l;i<=r;i++)
//         {
//             cout<<v[i]<<" ";
//         }
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

// #include <bits/stdc++.h>
// using namespace std;
// void subseq(vector<int> &v, int l, int n,vector<vector<int>>&ans,vector<int> &temp)
// {  if(l==n) 
//     {
//     ans.push_back(temp);
//     return ;
//     }
//    subseq(v,l+1,n,ans,temp);
//    temp.push_back(v[l]);
//    subseq(v,l+1,n,ans,temp);
//    temp.pop_back();
// }
// int main()
// {
//    vector<int>v={1,2,3};
//    vector<vector<int>>ans;
//    vector<int>temp;
//    int n=v.size();
//    subseq(v,0,n,ans,temp);
//    for(int i=0;i<ans.size();i++)
//    {
//     for(int j=0;j<ans[i].size();j++)
//     {
//         cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
//    }
// }


#include <bits/stdc++.h>
using namespace std;
void subseq(string &s, int l, int n,vector<vector<char>>&ans,vector<char> &temp)
{  if(l==n) 
    {
    ans.push_back(temp);
    return ;
    }
   subseq(s,l+1,n,ans,temp);
   temp.push_back(s[l]);
   subseq(s,l+1,n,ans,temp);
   temp.pop_back();
}
int main()
{
   string s="abcd";
   vector<vector<char>>ans;
   vector<char>temp;
   int n=s.size();
   subseq(s,0,n,ans,temp);
   for(int i=0;i<ans.size();i++)
   {
    for(int j=0;j<ans[i].size();j++)
    {
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
   }
}