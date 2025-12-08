// //T-O(2^N)
// //S-O(N)
// #include<bits/stdc++.h>
// using namespace std;
//    int subseq(vector<int>arr,int n,int l,int target)
//     {
//         if(l==n)
//         {   if(target==0) return 1;
//             else return 0;
//         }

//     int  take = subseq(arr, n, l + 1, target - arr[l]);
//     // exclude current element
//     int notTake = subseq(arr, n, l + 1, target);
//     return take+notTake;
//     }
// int main()
// {
//         // code here
//         vector<int>arr={5,2,3,6,10,8};
//         int n=arr.size();
//        cout<< subseq(arr,n,0,10);
// }

// repetition
// T-O(2^N)
// S-O(N)
#include <bits/stdc++.h>
using namespace std;
int subseq(vector<int> arr, int n, int l, int target)
{
    if (target == 0)
        return 1;
    if (l == n || target < 0)
        return 0;
    int take = subseq(arr, n, l, target - arr[l]);
    // exclude current element
    int notTake = subseq(arr, n, l + 1, target);
    return take + notTake;
}
int main()
{
    // code here
    vector<int> arr = {2, 3, 4};
    int n = arr.size();
    cout << subseq(arr, n, 0, 6);
}