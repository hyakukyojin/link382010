#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("khuyenmai.inp","r",stdin);
    freopen("khuyenmai.out","w",stdout);
    long long a,b,t;
    cin>>a>>b;t=a*b;
    if(a*b>1000000)cout<<t-t/10;
    else cout<<t;
    return 0;
}
