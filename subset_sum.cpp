//T-O(2^N)
//S-O(N)
#include<bits/stdc++.h>
using namespace std;
   void subseq(vector<int>arr,int s,int n,int l,vector<int>&temp)
    {
        if(l==n) 
        {
            temp.push_back(s);
            return ;
        }
        //not include
         subseq(arr,s,n,l+1,temp);
         //include
         subseq(arr,s+arr[l],n,l+1,temp);
    }
    int main(){
        // code here
        vector<int>arr={1,2};
        vector<int>temp;
        int n=arr.size();
        int l=0,s=0;
        subseq(arr,s,n,l,temp);
        for(int i:temp)
        {
            cout<<i<<" ";
        } 
    }