#include <bits/stdc++.h>
using namespace std;
bool binaryS(vector<int> &v, int l, int r, int s)
{
    if (l > r)
        return false;
    int m = (l + r) / 2;
    if (v[m] == s)
        return true;
    else if (v[m] > s)
        return binaryS(v, l, m - 1, s); 
    else
        return binaryS(v, m + 1, r, s);
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    int l = 0, r = v.size() - 1;
    int s = 6;
    cout << binaryS(v, l, r, s);
}