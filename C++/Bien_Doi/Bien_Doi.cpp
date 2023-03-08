#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bien_Doi.inp","r",stdin);
    freopen("Bien_Doi.out","w",stdout);
    int a,b,c,ma;
    int k;
    cin>>a>>b>>c>>k;
    ma=max(a,max(b,c));
    long long t=a+b+c-ma;
    for(int i=1;i<=k;i++)
    {
        ma=2*ma;
    }
    cout<<t+ma;
    return 0;
}
