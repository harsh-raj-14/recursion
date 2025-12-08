//T-O(2^N)
//S-O(N)
#include<bits/stdc++.h>
using namespace std;
   bool subseq(vector<int>arr,int n,int l,int target)
    {   if(target==0) return 1;
        if(l==n || target<0) 
        {
            return 0;
        }
        
    bool take = subseq(arr, n, l + 1, target - arr[l]);
    // exclude current element
    bool notTake = subseq(arr, n, l + 1, target);
    return take||notTake;
    }
int main()
{
        // code here
        vector<int>arr={3,6,4,5};
        vector<int>temp;
        int n=arr.size();
        int l=0;
       cout<< subseq(arr,n,l,12);
}
