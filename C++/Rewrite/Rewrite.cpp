#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("Rewrite.inp","r",stdin);
 freopen("Rewrite.out","w",stdout);
 long long l,r,d,d2=0,d3=0;
 cin>>l>>r;
 if (r-l<2) d=r;
 else if(r-l>4) d=2;
 else
 {
 for(int i=l;i<=r;i++)
 {
 if(i%2==0) d2++;
 if(i%3==0) d3++;
 }
 if(d3>=d2) d=3;else d=2;
 }
 cout<<d;
 return 0;
}
