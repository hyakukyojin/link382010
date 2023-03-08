#include <bits/stdc++.h>
using namespace std;
long long n,ma;
int main()
{
    freopen("DOITAT.inp","r",stdin);
    freopen("DOITAT.out","w",stdout);
    long long ts[10000],so;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>so;
        ts[so]++;ma=max(ma,so);
    }
    long long kq;
    for(int i=1;i<=ma;i++)
        kq=ts[i]/2;
    cout<<kq;
    return 0;
}
