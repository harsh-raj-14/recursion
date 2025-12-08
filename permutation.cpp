//Total Time=O(n×n!)
//space-O(n)
#include<bits/stdc++.h>
using namespace std;
void permutation(vector<int>arr,vector<int>t,vector<vector<int>>&ans,vector<bool>visited)
{
if(t.size()==visited.size())
{
    ans.push_back(t);
    return ;
}
for(int i=0;i<visited.size();i++)
{
    if(visited[i]==0)
    {
        visited[i]=true;;
        t.push_back(arr[i]);
        permutation(arr,t,ans,visited);
        visited[i]=false;
        t.pop_back();
    }
}
}
int main()
{
vector<int>arr={1,2,3};
vector<int>t;
vector<vector<int>>ans;
int n=arr.size();
vector<bool>visited(n,false);
permutation(arr,t,ans,visited);
for(auto & i:ans)
{
    for(int j:i)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
}


// //with repeated element
// //Total Time=O(n×n!)
// //space-O(n)
// #include<bits/stdc++.h>
// using namespace std;
// void permutation(vector<int>arr,vector<int>t,set<vector<int>>&ans,vector<bool>visited)
// {
// if(t.size()==visited.size())
// {   
//     ans.insert(t);
//     return ;
// }
// for(int i=0;i<visited.size();i++)
// {
//     if(visited[i]==0)
//     {
//         visited[i]=true;;
//         t.push_back(arr[i]);
//         permutation(arr,t,ans,visited);
//         visited[i]=false;
//         t.pop_back();
//     }
// }
// }
// int main()
// {
// vector<int>arr={2,1,1,2};
// vector<int>t;
// set<vector<int>>ans;
// int n=arr.size();
// vector<bool>visited(n,false);
// permutation(arr,t,ans,visited);
// for(auto & i:ans)
// {
//     for(int j:i)
//     {
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// }