#include <bits/stdc++.h>
using namespace std;
int sum_of_square(int n)
{
    if(n==1) return 1;
    return n*n+sum_of_square(n-1);
}
int main()
{
    int n=4;
   cout<<sum_of_square(n);
}