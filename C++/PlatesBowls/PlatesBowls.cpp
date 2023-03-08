#include <bits/stdc++.h>
using namespace std;
int main()
{
 freopen("PlatesBowls.inp","r",stdin);
 freopen("PlatesBowls.out","w",stdout);
 long long n,m,k,bat=0,dia=0,x,kq=0;
 cin>>n>>m>>k;
 for(int i=1;i<=n;i++)
 {
 cin>>x;
 if(x==1) bat++;else dia++;
 }
 if(m>=bat) m=m-bat;else {kq=bat-m;m=0;}
 if(k>=dia) k=k-dia;else {kq=kq+dia-k;}
 kq=kq-m;
 cout<<kq;
 return 0;
}
