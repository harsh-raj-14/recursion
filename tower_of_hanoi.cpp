#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, int source, int helper, int destination) {
        if(n==1)
        {
        cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;
         return ;
        }
        towerOfHanoi(n-1,source,destination,helper);
        cout<<"move disk "<<n<<" from rod "<<source<<" to rod "<<destination<<endl;
        towerOfHanoi(n-1,helper,source,destination);
    }
int main()
{   int n=3;
    towerOfHanoi(n,1,2,3);
}