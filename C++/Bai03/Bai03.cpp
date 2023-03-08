#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bai03.inp","r",stdin);
    freopen("Bai03.out","w",stdout);
    int n,m;
    cin>>n>>m;
    int so1=1;
    for(int i=1;i<=n;i++)so1=so1*10;
    int so2=so1*10-1;
    for(int i=so1;i<=so2;i++)
    {
        if(i%m==0)cout<<i<<endl;
    }
    return 0;
}
