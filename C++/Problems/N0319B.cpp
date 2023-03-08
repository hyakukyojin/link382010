#include <bits/stdc++.h>
using namespace std;
long long n,t=2000,st=2000;
int main()
{
    freopen("n0319b.INP","r",stdin);
    freopen("n0319b.OUT","w",stdout);
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        st=st+1000;
        t+=st;
    }
    cout<<t;
    return 0;
}
