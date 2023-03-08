#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("maxnso.inp","r",stdin);
 freopen("maxnso.out","w",stdout);
 long long n,m,ma=0;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     cin>>m;
     ma=max(m,ma);
 }
 cout<<ma;
 return 0;
}
