#include <bits/stdc++.h>
using namespace std;
int nth_stairs(int n)
{
    if(n<=1) return 1;
    return nth_stairs(n-1)+nth_stairs(n-2);
}
int main()
{
    int n=45;
   cout<<nth_stairs(n);
}