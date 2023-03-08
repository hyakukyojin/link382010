#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("somax.inp","r",stdin);
 freopen("somax.out","w",stdout);
 long long so,ma=-10e9;
 while(cin>>so)ma=max(so,ma);
 cout<<ma;
 return 0;
}
