#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("chiahet.inp","r",stdin);
    freopen("chiahet.out","w",stdout);
    long long n,t;
    cin>>n;
    t=n-n/2-n/7-n/3-n/5+n/6+n/10+n/14+n/15+n/21+n/35-n/30-n/42-n/70-n/105+n/210;
    cout<<t;
    return 0;
}
