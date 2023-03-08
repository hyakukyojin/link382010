#include <bits/stdc++.h>
using namespace std;
long long n,s;
int main()
{
    freopen("n1013e.INP","r",stdin);
    freopen("n1013e.OUT","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++)s=s+n/i;
    cout<<s;
    return 0;
}
