#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("BIENDOI.inp","r",stdin);
 freopen("BIENDOI.out","w",stdout);
 int n;
 cin>>n;
 if(n%2==0)cout<<n/2;
 else if(n%2!=0)cout<<n-1;
 return 0;
}
