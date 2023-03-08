#include <bits/stdc++.h>
using namespace std;
long long a,b,ucln;
int main()
{
    freopen("PHANSO.inp","r",stdin);
    freopen("PHANSO.out","w",stdout);
    cin>>a>>b;
    ucln=__gcd(a,b);
    if(a%b==0)cout<<a/b;
    else cout<<a/ucln<<'/'<<b/ucln;
    return 0;
}
