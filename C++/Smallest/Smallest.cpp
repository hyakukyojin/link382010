#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("Smallest.inp","r",stdin);
 freopen("Smallest.out","w",stdout);
 int n,k,du,thua;
 du=n%k;
 thua=k-du;
 cout<<n+thua;
 return 0;
}
