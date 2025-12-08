//T-O()
#include<bits/stdc++.h>
using namespace std;
int way(vector<int>&arr,int s)
{  if(s==0) return 1;
    if(s<0) return 0;
    int ans=0;
    for(int i=0;i<arr.size();i++)
    {
       ans+=way(arr,s-arr[i]);
    }
    return ans;
}
int main()
{
vector<int>arr={1,5,6};
vector<vector<int>>ans;
int s=7; 
cout<<way(arr,s);//6
}