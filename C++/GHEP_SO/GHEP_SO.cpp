#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("GHEP_SO.inp","r",stdin);
    freopen("GHEP_SO.out","w",stdout);
    int a,b,c,ma;
    cin>>a>>b>>c;
    ma=max(a,max(b,c));
    int mi;
    mi=min(a,min(b,c));
    cout<<ma*100+(a+b+c-ma-mi)*10+mi;
    return 0;
}
