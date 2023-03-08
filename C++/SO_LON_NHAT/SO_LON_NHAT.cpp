#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("SO_LON_NHAT.inp","r",stdin);
    freopen("SO_LON_NHAT.out","w",stdout);
    int n,ma,a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
    }
    ma = max(a,max(n,a));
    cout<<ma;
    return 0;
}
