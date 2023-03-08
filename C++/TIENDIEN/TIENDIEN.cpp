#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("TIENDIEN.inp","r",stdin);
    freopen("TIENDIEN.out","w",stdout);
    long long n;
    cin>>n;
    if(n<=100)cout<<n*3000;
    else cout<<100*3000+(n-100)*4500;
    return 0;
}
