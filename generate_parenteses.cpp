#include <bits/stdc++.h>
using namespace std;
void genparen(int n, int l, int r,vector<string>&ans,string &temp)
{  
    if(l+r==2*n)
    {
        ans.push_back(temp);
        return ;
    }

    if(l<n)
    {
        temp.push_back('(');
        genparen(n,l+1,r,ans,temp);
        temp.pop_back();
    }
    if(r<l)
    {
        temp.push_back(')');
        genparen(n,l,r+1,ans,temp);
        temp.pop_back();
    }

}
int main()
{int n=3;
  vector<string>ans;
  string temp;
   genparen(n,0,0,ans,temp);
   for(int i=0;i<ans.size();i++)
   {
    for(int j=0;j<ans[i].size();j++)
    {
        cout<<ans[i][j]<<"";
    }
    cout<<endl;
   }
}