#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>&arr,vector<vector<int>>&ans,int index)
{   if(arr.size()==index) 
    {
        ans.push_back(arr);
        return ;
    }
    vector<bool>use(21,0);
    for(int i=index;i<arr.size();i++)
    {
        if(use[arr[i]+10]==0)
        {    
            swap(arr[index],arr[i]);
            permutation(arr,ans,index+1);
            swap(arr[index],arr[i]);
            use[arr[i]+10]=1;
        }
    }
}
int main()
{
vector<int>arr={1,1,2,2};
vector<vector<int>>ans;
permutation(arr,ans,0);
for(auto & i:ans)
{
    for(int j:i)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
}