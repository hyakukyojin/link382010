#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("bcnn.inp","r",stdin);
    freopen("bcnn.out","w",stdout);
    int m,n;
    cin>>m>>n;
    cout<<(m*n)/__gcd(m,n);
    return 0;
}
