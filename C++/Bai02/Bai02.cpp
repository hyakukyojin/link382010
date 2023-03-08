#include <bits/stdc++.h>
using namespace std;
int main()
{
    freopen("Bai02.inp","r",stdin);
    freopen("Bai02.out","w",stdout);
    int n,m;
    cin>>n>>m;
    if(n%2!=0&&m%2!=0)cout<<(n+m)*((m-n)/2+1)/2;
    else cout<<n+m;
    return 0;
}
