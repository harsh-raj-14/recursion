#include<bits/stdc++.h>
using namespace std;
void totalways(vector<vector<int>> &m,int i,int j,int n,string path,vector<vector<bool>>&visited,vector<string>&ans)
    {
        if(i<0||i>=n||j<0||j>=n||m[i][j]==0||visited[i][j]==1)
        return;
        
        if(i==n-1&&j==n-1)
        {
            ans.push_back(path);
            return;
        }
        visited[i][j]=1;
        
        // Up
         totalways(m,i-1,j,n,path+'U',visited,ans);
        // Down
         totalways(m,i+1,j,n,path+'D',visited,ans);
        // Right
         totalways(m,i,j+1,n,path+'R',visited,ans);
        // Left
         totalways(m,i,j-1,n,path+'L',visited,ans);
         
         visited[i][j]=0;//Taaki backtracking kar sake
       
    }
     vector<string> ratInMaze(vector<vector<int>>& maze) {
        // Your code goes here
        string path;
        int n=maze.size();
        vector<vector<bool>>visited(n,vector<bool>(n,0));
        vector<string>ans;
        totalways(maze,0,0,n,path,visited,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
int main()
{
  vector<vector<int>>maze={
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};
        vector<string> result = ratInMaze(maze);
    for (auto p : result) {
        cout << p << " ";
    }
}