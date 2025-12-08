#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if(n==0) return 1;
    rec(n-1);
    cout<<n<<endl;
}
int main()
{
    int n=10;
    rec(n);
}