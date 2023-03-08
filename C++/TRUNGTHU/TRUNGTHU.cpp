#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TRUNGTHU.inp","r",stdin);
    freopen("TRUNGTHU.out","w",stdout);
    long long n,k,t;
    cin>>n>>k;
    t=1;
    for(int i=n;i>n-k;i--)
    {
        t=t*i;
    }
    long long gt=1;
    for(int i=1;i<=k;i++)
        gt=gt*i;
    if(k<=n)cout<<t/gt;
    else cout<<-1;
    return 0;
}
