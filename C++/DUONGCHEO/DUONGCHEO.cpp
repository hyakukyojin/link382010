#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("DUONGCHEO.inp","r",stdin);
 freopen("DUONGCHEO.out","w",stdout);
 long long n;
 cin>>n;
 if(n<4)cout<<"-1";
 else cout<<n*(n-3)/2;
 return 0;
}
