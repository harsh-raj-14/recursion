#include<bits/stdc++.h>
using namespace std;
void row(vector<vector<int>>&v,int j)
{
 for(int i=0;i<v.size();i++)
 {
    v[i][j]=1;
 }
}
void col(vector<vector<int>>&v,int i)
{
 for(int j=0;j<v.size();j++)
 {
    v[i][j]=1;
 }
}
void diag(vector<vector<int>>&v,int i,int j,int n)
{
    while( i<n && j<n)
    {
       v[i][j]=1;
       i++;
       j++;
    }
    while( i>=0 && j>=0)
    {
       v[i][j]=1;
       i--;
       j--;
    }
}
void point(vector<vector<string>>&ans, string&temp,int n,int idx)
{
  vector<vector<int>>v(n, vector<int>(n,0));
  for(int i=0;i<n;i++)
  {
    if(i==idx) temp[i]='Q';
    else temp[i]='.';
  }
 
   for(int i=0;i<n;i++)
   {  if(v[])
      row(v,i);
      col(v,idx);
      diag(v,i,idx,n);
      
   }
}
int main()
{
    int n=4;
   vector<vector<string>>ans;
   string temp="";
   point(ans,temp,n,0);
}