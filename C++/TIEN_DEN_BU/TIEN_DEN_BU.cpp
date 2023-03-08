#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TIEN_DEN_BU.inp","r",stdin);
    freopen("TIEN_DEN_BU.out","w",stdout);
    int a,b,c,n,m,k;
    cin>>a>>b>>c>>k>>m>>n;
    int t=a*k+b*m+c*(n-k-m);
    cout<<t;
    return 0;
}
