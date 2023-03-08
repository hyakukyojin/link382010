#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Tongps.inp","r",stdin);
    freopen("Tongps.out","w",stdout);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int tu=a*d+c*b,mau=b*d,mc=__gcd(tu,mau);
    cout<<tu/mc<<' '<<mau/mc;
    return 0;
}
