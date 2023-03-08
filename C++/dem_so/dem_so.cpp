#include <bits/stdc++.h>
using namespace std;
bool nt[10000001],fibo[10000001];
int main()
{
freopen("dem_so.inp","r",stdin);
freopen("dem_so.out","w",stdout);
int n=10000000;
for(int i=1;i<=n;i++) {nt[i]=1;fibo[i]=0;}
for(int i=2;i<=n;i++)
    if(nt[i])
            {
                int sl=n/i;
                for(int j=2;j<=sl;j++) nt[i*j]=0;
            }
int f1=1,f2=1,f3=1;
while(f2<=n)
        {
            fibo[f1]=1;
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
int N;
cin>>N;
int d1=0,d2=0;
for(int i=1;i<=N;i++)
                {
                    if(nt[i]) d1++;
                    if(fibo[i]) d2++;
                }
int k=sqrt(N) ;
cout<<k+1<<endl<<d1<<endl<<d2;
return 0;
}

