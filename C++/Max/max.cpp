#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("max.inp","r",stdin);
    freopen("max.out","w",stdout);
    long long n,m,h;
    cin>>n>>m>>h;
    cout<<max(n,max(m,h));
    return 0;
}
